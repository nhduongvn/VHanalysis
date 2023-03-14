#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_all_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_all/Aplanarity_tags_all
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_all = new TCanvas("Aplanarity_tags_all", "Aplanarity_tags_all",0,0,600,600);
   Aplanarity_tags_all->SetHighLightColor(2);
   Aplanarity_tags_all->Range(-0.2183529,-2.734005,1.171633,1.112149);
   Aplanarity_tags_all->SetFillColor(0);
   Aplanarity_tags_all->SetFillStyle(4000);
   Aplanarity_tags_all->SetBorderMode(0);
   Aplanarity_tags_all->SetBorderSize(2);
   Aplanarity_tags_all->SetLogy();
   Aplanarity_tags_all->SetLeftMargin(0.15709);
   Aplanarity_tags_all->SetRightMargin(0.1234783);
   Aplanarity_tags_all->SetBottomMargin(0.12);
   Aplanarity_tags_all->SetFrameFillStyle(1000);
   Aplanarity_tags_all->SetFrameBorderMode(0);
   Aplanarity_tags_all->SetFrameFillStyle(1000);
   Aplanarity_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_64 = new TH1F("st_stack_64","",50,0,1);
   st_stack_64->SetMinimum(11.42971);
   st_stack_64->SetMaximum(5.339901);
   st_stack_64->SetDirectory(0);
   st_stack_64->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_64->SetLineColor(ci);
   st_stack_64->GetXaxis()->SetTitle("Aplanarity");
   st_stack_64->GetXaxis()->SetRange(1,50);
   st_stack_64->GetXaxis()->SetLabelFont(42);
   st_stack_64->GetXaxis()->SetTitleOffset(1);
   st_stack_64->GetXaxis()->SetTitleFont(42);
   st_stack_64->GetYaxis()->SetTitle("Event/0.02");
   st_stack_64->GetYaxis()->SetLabelFont(42);
   st_stack_64->GetYaxis()->SetTitleSize(0.037);
   st_stack_64->GetYaxis()->SetTitleFont(42);
   st_stack_64->GetZaxis()->SetLabelFont(42);
   st_stack_64->GetZaxis()->SetTitleOffset(1);
   st_stack_64->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_64);
   
   
   TH1D *VbbHcc_tags_Aplanarity_all_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(1,4.024589);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(2,2.6509);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(3,1.746678);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(4,1.12904);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(5,0.8038558);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(6,0.6174636);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(7,0.421166);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(8,0.3153318);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(9,0.2106647);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(10,0.1572461);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(11,0.1281336);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(12,0.07370869);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(13,0.09211674);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(14,0.04464382);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(15,0.02311337);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(16,0.009155242);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(17,0.007033268);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(18,0.004306369);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(19,0.002276181);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(22,0.001414931);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(1,0.09169366);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(2,0.06852825);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(3,0.05751791);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(4,0.04468148);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(5,0.03993306);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(6,0.03262107);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(7,0.02747059);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(8,0.02368774);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(9,0.0198799);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(10,0.01647825);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(11,0.01493932);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(12,0.01163616);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(13,0.01322158);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(14,0.008686657);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(15,0.005999837);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(16,0.003535061);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(17,0.00315202);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(18,0.002491748);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(19,0.001652621);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(22,0.001414931);
   VbbHcc_tags_Aplanarity_all_stack_1->SetEntries(8003);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Aplanarity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Aplanarity_all_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_all_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(1,1.596566);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(2,1.191646);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(3,0.7903331);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(4,0.5428851);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(5,0.3682797);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(6,0.2638462);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(7,0.1822577);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(8,0.1270421);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(9,0.08317912);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(10,0.0574544);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(11,0.04449597);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(12,0.02706869);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(13,0.02069847);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(14,0.01090919);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(15,0.005931677);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(16,0.004451656);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(17,0.00220803);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(18,0.0004202635);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(19,0.001831855);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(20,0.0005693107);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(21,0.0003363733);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(1,0.01937982);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(2,0.01661854);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(3,0.01355787);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(4,0.01127091);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(5,0.009166256);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(6,0.007718402);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(7,0.00656488);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(8,0.006452848);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(9,0.00431033);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(10,0.003827825);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(11,0.003989918);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(12,0.003046181);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(13,0.002228242);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(14,0.001528156);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(15,0.001164153);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(16,0.00100685);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(17,0.0007203966);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(18,0.0003207291);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(19,0.0007015792);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(20,0.0003608937);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(21,0.0002390958);
   VbbHcc_tags_Aplanarity_all_stack_2->SetEntries(25459);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Aplanarity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_all->Modified();
   Aplanarity_tags_all->cd();
   Aplanarity_tags_all->SetSelected(Aplanarity_tags_all);
}
