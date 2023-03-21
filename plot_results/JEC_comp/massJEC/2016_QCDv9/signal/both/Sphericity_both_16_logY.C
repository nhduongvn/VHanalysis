#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_both_16_logY()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Mon Mar 20 11:49:58 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2183529,-0.1299468,1.171633,0.4068374);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetFillStyle(4000);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLogy();
   Sphericity_both_16->SetLeftMargin(0.15709);
   Sphericity_both_16->SetRightMargin(0.1234783);
   Sphericity_both_16->SetBottomMargin(0.12);
   Sphericity_both_16->SetFrameFillStyle(1000);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameFillStyle(1000);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(2.117134);
   
   TH1F *st_stack_249 = new TH1F("st_stack_249","",25,0,1);
   st_stack_249->SetMinimum(0.8599383);
   st_stack_249->SetMaximum(2.255065);
   st_stack_249->SetDirectory(0);
   st_stack_249->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_249->SetLineColor(ci);
   st_stack_249->GetXaxis()->SetTitle("Sphericity");
   st_stack_249->GetXaxis()->SetRange(1,25);
   st_stack_249->GetXaxis()->SetLabelFont(42);
   st_stack_249->GetXaxis()->SetTitleOffset(1);
   st_stack_249->GetXaxis()->SetTitleFont(42);
   st_stack_249->GetYaxis()->SetTitle("Event/0.04");
   st_stack_249->GetYaxis()->SetLabelFont(42);
   st_stack_249->GetYaxis()->SetTitleSize(0.037);
   st_stack_249->GetYaxis()->SetTitleFont(42);
   st_stack_249->GetZaxis()->SetLabelFont(42);
   st_stack_249->GetZaxis()->SetTitleOffset(1);
   st_stack_249->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_249);
   
   
   TH1D *VbbHcc_both_Sphericity_stack_1 = new TH1D("VbbHcc_both_Sphericity_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(1,1.217069);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(2,1.128097);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(3,0.6718921);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(4,0.3650926);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(5,0.2433993);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(6,0.1333369);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(7,0.06159417);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(8,0.0325685);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(9,0.01172788);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(10,0.003079495);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(11,0.008323787);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(12,0.00978354);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(13,0.005632244);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(14,0.002997364);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(15,0.002874583);
   VbbHcc_both_Sphericity_stack_1->SetBinError(1,0.059966);
   VbbHcc_both_Sphericity_stack_1->SetBinError(2,0.05804438);
   VbbHcc_both_Sphericity_stack_1->SetBinError(3,0.04463111);
   VbbHcc_both_Sphericity_stack_1->SetBinError(4,0.03304101);
   VbbHcc_both_Sphericity_stack_1->SetBinError(5,0.02709957);
   VbbHcc_both_Sphericity_stack_1->SetBinError(6,0.01967315);
   VbbHcc_both_Sphericity_stack_1->SetBinError(7,0.01409426);
   VbbHcc_both_Sphericity_stack_1->SetBinError(8,0.009613426);
   VbbHcc_both_Sphericity_stack_1->SetBinError(9,0.0058807);
   VbbHcc_both_Sphericity_stack_1->SetBinError(10,0.003079495);
   VbbHcc_both_Sphericity_stack_1->SetBinError(11,0.004812853);
   VbbHcc_both_Sphericity_stack_1->SetBinError(12,0.004960371);
   VbbHcc_both_Sphericity_stack_1->SetBinError(13,0.003983456);
   VbbHcc_both_Sphericity_stack_1->SetBinError(14,0.002997364);
   VbbHcc_both_Sphericity_stack_1->SetBinError(15,0.002874583);
   VbbHcc_both_Sphericity_stack_1->SetEntries(1377);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Sphericity_stack_1->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_2 = new TH1D("VbbHcc_both_Sphericity_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(1,0.540152);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(2,0.478065);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(3,0.2609577);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(4,0.1654855);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(5,0.08333674);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(6,0.05432765);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(7,0.01918481);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(8,0.01342474);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(9,0.008272397);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(10,0.005596954);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(11,0.004639152);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(12,0.004845824);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(13,0.003413571);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(14,0.002382015);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(15,0.002994083);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(16,0.001968805);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(17,0.001078717);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(18,0.0006122942);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(19,0.0003663933);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(20,0.0001783629);
   VbbHcc_both_Sphericity_stack_2->SetBinError(1,0.01433806);
   VbbHcc_both_Sphericity_stack_2->SetBinError(2,0.01354009);
   VbbHcc_both_Sphericity_stack_2->SetBinError(3,0.009953361);
   VbbHcc_both_Sphericity_stack_2->SetBinError(4,0.007936679);
   VbbHcc_both_Sphericity_stack_2->SetBinError(5,0.005653147);
   VbbHcc_both_Sphericity_stack_2->SetBinError(6,0.004571097);
   VbbHcc_both_Sphericity_stack_2->SetBinError(7,0.002684508);
   VbbHcc_both_Sphericity_stack_2->SetBinError(8,0.002229796);
   VbbHcc_both_Sphericity_stack_2->SetBinError(9,0.001775993);
   VbbHcc_both_Sphericity_stack_2->SetBinError(10,0.001450561);
   VbbHcc_both_Sphericity_stack_2->SetBinError(11,0.001293753);
   VbbHcc_both_Sphericity_stack_2->SetBinError(12,0.001369104);
   VbbHcc_both_Sphericity_stack_2->SetBinError(13,0.001138085);
   VbbHcc_both_Sphericity_stack_2->SetBinError(14,0.0009747284);
   VbbHcc_both_Sphericity_stack_2->SetBinError(15,0.001068474);
   VbbHcc_both_Sphericity_stack_2->SetBinError(16,0.0008823278);
   VbbHcc_both_Sphericity_stack_2->SetBinError(17,0.0006306067);
   VbbHcc_both_Sphericity_stack_2->SetBinError(18,0.0004438888);
   VbbHcc_both_Sphericity_stack_2->SetBinError(19,0.0003663933);
   VbbHcc_both_Sphericity_stack_2->SetBinError(20,0.0001783629);
   VbbHcc_both_Sphericity_stack_2->SetEntries(4411);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_16->Modified();
   Sphericity_both_16->cd();
   Sphericity_both_16->SetSelected(Sphericity_both_16);
}
