#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_16_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(-0.2183529,-3.481849,1.171633,0.3643044);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetFillStyle(4000);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLogy();
   Aplanarity_tags_16->SetLeftMargin(0.15709);
   Aplanarity_tags_16->SetRightMargin(0.1234783);
   Aplanarity_tags_16->SetBottomMargin(0.12);
   Aplanarity_tags_16->SetFrameFillStyle(1000);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameFillStyle(1000);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_61 = new TH1F("st_stack_61","",50,0,1);
   st_stack_61->SetMinimum(18.70637);
   st_stack_61->SetMaximum(0.9543089);
   st_stack_61->SetDirectory(0);
   st_stack_61->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_61->SetLineColor(ci);
   st_stack_61->GetXaxis()->SetTitle("Aplanarity");
   st_stack_61->GetXaxis()->SetRange(1,50);
   st_stack_61->GetXaxis()->SetLabelFont(42);
   st_stack_61->GetXaxis()->SetTitleOffset(1);
   st_stack_61->GetXaxis()->SetTitleFont(42);
   st_stack_61->GetYaxis()->SetTitle("Event/0.02");
   st_stack_61->GetYaxis()->SetLabelFont(42);
   st_stack_61->GetYaxis()->SetTitleSize(0.037);
   st_stack_61->GetYaxis()->SetTitleFont(42);
   st_stack_61->GetZaxis()->SetLabelFont(42);
   st_stack_61->GetZaxis()->SetTitleOffset(1);
   st_stack_61->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_61);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,0.8387336);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,0.5554878);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,0.3965287);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,0.2530001);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,0.1772076);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,0.1241422);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,0.09049987);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,0.07979509);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,0.04840695);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,0.03894105);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,0.03073647);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(12,0.01667429);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(13,0.02287438);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(14,0.01452447);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,0.004080653);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,0.04167134);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,0.03386085);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,0.02871408);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,0.02275686);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,0.01961607);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,0.01633522);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,0.01380718);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,0.01298061);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,0.01093073);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,0.009241871);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,0.007832209);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(12,0.005900797);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(13,0.006902007);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(14,0.005505412);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,0.002885621);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(1354);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,0.3338796);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,0.2477263);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,0.1720325);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,0.1233835);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,0.08113331);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,0.05524133);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,0.04590531);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,0.0270264);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,0.01765511);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,0.01264295);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,0.007652363);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,0.004925981);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,0.003446148);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,0.002007997);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(15,0.0005726825);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(16,0.001109564);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(17,0.0002636822);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(18,0.0002963736);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(19,0.0005501787);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,0.009401694);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,0.008154608);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,0.006787918);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,0.005784019);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,0.004687076);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,0.003864786);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,0.003522527);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,0.002714646);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,0.002195952);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,0.001853435);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,0.001445018);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,0.001162635);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,0.0009225136);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,0.000722942);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(15,0.000405659);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(16,0.0005555826);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(17,0.0002636822);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(18,0.0002963736);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(19,0.0003890351);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(4322);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_16->Modified();
   Aplanarity_tags_16->cd();
   Aplanarity_tags_16->SetSelected(Aplanarity_tags_16);
}
