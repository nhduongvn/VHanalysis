#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_jets_bckg_16()
{
//=========Macro generated from canvas: nJet_jets_bckg_16/nJet_jets_bckg_16
//=========  (Wed Mar  1 14:06:11 2023) by ROOT version 6.26/06
   TCanvas *nJet_jets_bckg_16 = new TCanvas("nJet_jets_bckg_16", "nJet_jets_bckg_16",0,0,600,600);
   nJet_jets_bckg_16->SetHighLightColor(2);
   nJet_jets_bckg_16->Range(-3.556941,-1.412267e+11,15.90286,1.035663e+12);
   nJet_jets_bckg_16->SetFillColor(0);
   nJet_jets_bckg_16->SetFillStyle(4000);
   nJet_jets_bckg_16->SetBorderMode(0);
   nJet_jets_bckg_16->SetBorderSize(2);
   nJet_jets_bckg_16->SetLeftMargin(0.15709);
   nJet_jets_bckg_16->SetRightMargin(0.1234783);
   nJet_jets_bckg_16->SetBottomMargin(0.12);
   nJet_jets_bckg_16->SetFrameFillStyle(1000);
   nJet_jets_bckg_16->SetFrameBorderMode(0);
   nJet_jets_bckg_16->SetFrameFillStyle(1000);
   nJet_jets_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(9.179736e+11);
   
   TH1F *st_stack_2 = new TH1F("st_stack_2","",14,-0.5,13.5);
   st_stack_2->SetMinimum(0);
   st_stack_2->SetMaximum(9.179736e+11);
   st_stack_2->SetDirectory(0);
   st_stack_2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_2->SetLineColor(ci);
   st_stack_2->GetXaxis()->SetTitle("Jet multiplicity");
   st_stack_2->GetXaxis()->SetRange(1,14);
   st_stack_2->GetXaxis()->SetLabelFont(42);
   st_stack_2->GetXaxis()->SetTitleOffset(1);
   st_stack_2->GetXaxis()->SetTitleFont(42);
   st_stack_2->GetYaxis()->SetTitle("Events/1.0");
   st_stack_2->GetYaxis()->SetLabelFont(42);
   st_stack_2->GetYaxis()->SetTitleSize(0.037);
   st_stack_2->GetYaxis()->SetTitleFont(42);
   st_stack_2->GetZaxis()->SetLabelFont(42);
   st_stack_2->GetZaxis()->SetTitleOffset(1);
   st_stack_2->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_2);
   
   
   TH1D *VbbHcc_jets_nJet_stack_1 = new TH1D("VbbHcc_jets_nJet_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_1->SetBinContent(1,6.119814e+11);
   VbbHcc_jets_nJet_stack_1->SetBinContent(2,3.333359e+11);
   VbbHcc_jets_nJet_stack_1->SetBinContent(3,1.893593e+11);
   VbbHcc_jets_nJet_stack_1->SetBinContent(4,1.547915e+10);
   VbbHcc_jets_nJet_stack_1->SetBinContent(5,2.122777e+09);
   VbbHcc_jets_nJet_stack_1->SetBinContent(6,2.623464e+08);
   VbbHcc_jets_nJet_stack_1->SetBinContent(7,3.632195e+07);
   VbbHcc_jets_nJet_stack_1->SetBinContent(8,5200521);
   VbbHcc_jets_nJet_stack_1->SetBinContent(9,752652);
   VbbHcc_jets_nJet_stack_1->SetBinContent(10,110639.9);
   VbbHcc_jets_nJet_stack_1->SetBinContent(11,16080.4);
   VbbHcc_jets_nJet_stack_1->SetBinContent(12,2157.864);
   VbbHcc_jets_nJet_stack_1->SetBinContent(13,318.8141);
   VbbHcc_jets_nJet_stack_1->SetBinContent(14,35.03823);
   VbbHcc_jets_nJet_stack_1->SetBinContent(15,16.50309);
   VbbHcc_jets_nJet_stack_1->SetBinError(1,1.162829e+08);
   VbbHcc_jets_nJet_stack_1->SetBinError(2,8.352251e+07);
   VbbHcc_jets_nJet_stack_1->SetBinError(3,5.792976e+07);
   VbbHcc_jets_nJet_stack_1->SetBinError(4,9247241);
   VbbHcc_jets_nJet_stack_1->SetBinError(5,1960673);
   VbbHcc_jets_nJet_stack_1->SetBinError(6,449544.2);
   VbbHcc_jets_nJet_stack_1->SetBinError(7,136909.5);
   VbbHcc_jets_nJet_stack_1->SetBinError(8,40658.55);
   VbbHcc_jets_nJet_stack_1->SetBinError(9,6123.598);
   VbbHcc_jets_nJet_stack_1->SetBinError(10,1565.068);
   VbbHcc_jets_nJet_stack_1->SetBinError(11,409.2798);
   VbbHcc_jets_nJet_stack_1->SetBinError(12,98.1273);
   VbbHcc_jets_nJet_stack_1->SetBinError(13,30.01064);
   VbbHcc_jets_nJet_stack_1->SetBinError(14,7.448393);
   VbbHcc_jets_nJet_stack_1->SetBinError(15,9.004327);
   VbbHcc_jets_nJet_stack_1->SetEntries(2.421249e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_nJet_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_1->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_1,"");
   
   TH1D *VbbHcc_jets_nJet_stack_2 = new TH1D("VbbHcc_jets_nJet_stack_2","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_2->SetBinContent(1,1011767);
   VbbHcc_jets_nJet_stack_2->SetBinContent(2,3579906);
   VbbHcc_jets_nJet_stack_2->SetBinContent(3,7467452);
   VbbHcc_jets_nJet_stack_2->SetBinContent(4,8273659);
   VbbHcc_jets_nJet_stack_2->SetBinContent(5,5639915);
   VbbHcc_jets_nJet_stack_2->SetBinContent(6,2617840);
   VbbHcc_jets_nJet_stack_2->SetBinContent(7,924124.1);
   VbbHcc_jets_nJet_stack_2->SetBinContent(8,265829);
   VbbHcc_jets_nJet_stack_2->SetBinContent(9,66789.68);
   VbbHcc_jets_nJet_stack_2->SetBinContent(10,15161.43);
   VbbHcc_jets_nJet_stack_2->SetBinContent(11,3181.581);
   VbbHcc_jets_nJet_stack_2->SetBinContent(12,609.2419);
   VbbHcc_jets_nJet_stack_2->SetBinContent(13,117.133);
   VbbHcc_jets_nJet_stack_2->SetBinContent(14,19.8806);
   VbbHcc_jets_nJet_stack_2->SetBinContent(15,3.097829);
   VbbHcc_jets_nJet_stack_2->SetBinError(1,232.0435);
   VbbHcc_jets_nJet_stack_2->SetBinError(2,443.3303);
   VbbHcc_jets_nJet_stack_2->SetBinError(3,665.4148);
   VbbHcc_jets_nJet_stack_2->SetBinError(4,727.311);
   VbbHcc_jets_nJet_stack_2->SetBinError(5,619.7406);
   VbbHcc_jets_nJet_stack_2->SetBinError(6,429.6321);
   VbbHcc_jets_nJet_stack_2->SetBinError(7,257.5245);
   VbbHcc_jets_nJet_stack_2->SetBinError(8,138.6422);
   VbbHcc_jets_nJet_stack_2->SetBinError(9,69.63031);
   VbbHcc_jets_nJet_stack_2->SetBinError(10,33.20671);
   VbbHcc_jets_nJet_stack_2->SetBinError(11,15.21398);
   VbbHcc_jets_nJet_stack_2->SetBinError(12,6.647223);
   VbbHcc_jets_nJet_stack_2->SetBinError(13,2.91422);
   VbbHcc_jets_nJet_stack_2->SetBinError(14,1.20796);
   VbbHcc_jets_nJet_stack_2->SetBinError(15,0.4743359);
   VbbHcc_jets_nJet_stack_2->SetEntries(5.130375e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_nJet_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_2->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nJet_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   nJet_jets_bckg_16->Modified();
   nJet_jets_bckg_16->cd();
   nJet_jets_bckg_16->SetSelected(nJet_jets_bckg_16);
}
