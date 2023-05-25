#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_both_noMassCorr_16()
{
//=========Macro generated from canvas: Sphericity_both_noMassCorr_16/Sphericity_both_noMassCorr_16
//=========  (Thu May 25 11:52:41 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_both_noMassCorr_16 = new TCanvas("Sphericity_both_noMassCorr_16", "Sphericity_both_noMassCorr_16",0,0,600,600);
   Sphericity_both_noMassCorr_16->SetHighLightColor(2);
   Sphericity_both_noMassCorr_16->Range(-0.2183529,-0.1844464,1.171633,1.352607);
   Sphericity_both_noMassCorr_16->SetFillColor(0);
   Sphericity_both_noMassCorr_16->SetFillStyle(4000);
   Sphericity_both_noMassCorr_16->SetBorderMode(0);
   Sphericity_both_noMassCorr_16->SetBorderSize(2);
   Sphericity_both_noMassCorr_16->SetLeftMargin(0.15709);
   Sphericity_both_noMassCorr_16->SetRightMargin(0.1234783);
   Sphericity_both_noMassCorr_16->SetBottomMargin(0.12);
   Sphericity_both_noMassCorr_16->SetFrameFillStyle(1000);
   Sphericity_both_noMassCorr_16->SetFrameBorderMode(0);
   Sphericity_both_noMassCorr_16->SetFrameFillStyle(1000);
   Sphericity_both_noMassCorr_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.198902);
   
   TH1F *st_stack_183 = new TH1F("st_stack_183","",25,0,1);
   st_stack_183->SetMinimum(0);
   st_stack_183->SetMaximum(1.198902);
   st_stack_183->SetDirectory(0);
   st_stack_183->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_183->SetLineColor(ci);
   st_stack_183->GetXaxis()->SetTitle("Sphericity");
   st_stack_183->GetXaxis()->SetRange(1,25);
   st_stack_183->GetXaxis()->SetLabelFont(42);
   st_stack_183->GetXaxis()->SetTitleOffset(1);
   st_stack_183->GetXaxis()->SetTitleFont(42);
   st_stack_183->GetYaxis()->SetTitle("Event/0.04");
   st_stack_183->GetYaxis()->SetLabelFont(42);
   st_stack_183->GetYaxis()->SetTitleSize(0.037);
   st_stack_183->GetYaxis()->SetTitleFont(42);
   st_stack_183->GetZaxis()->SetLabelFont(42);
   st_stack_183->GetZaxis()->SetTitleOffset(1);
   st_stack_183->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_183);
   
   
   TH1D *VbbHcc_both_noMassCorr_Sphericity_stack_1 = new TH1D("VbbHcc_both_noMassCorr_Sphericity_stack_1","",25,0,1);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinContent(1,0.6019728);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinContent(2,0.6980122);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinContent(3,0.4973606);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinContent(4,0.3519799);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinContent(5,0.2987458);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinContent(6,0.258481);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinContent(7,0.1857609);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinContent(8,0.1923333);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinContent(9,0.2079571);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinContent(10,0.1250712);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinContent(11,0.08888302);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinContent(12,0.0877463);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinContent(13,0.07312117);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinContent(14,0.07290502);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinContent(15,0.0532024);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinContent(16,0.03916505);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinContent(17,0.02615238);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinContent(18,0.02207845);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinContent(19,0.0164622);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinContent(20,0.002934349);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinError(1,0.04207228);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinError(2,0.04535826);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinError(3,0.03837554);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinError(4,0.03218875);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinError(5,0.02989149);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinError(6,0.02806323);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinError(7,0.02353243);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinError(8,0.02420081);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinError(9,0.02465059);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinError(10,0.01997879);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinError(11,0.01671101);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinError(12,0.01611137);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinError(13,0.01453622);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinError(14,0.01462129);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinError(15,0.01242758);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinError(16,0.01087648);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinError(17,0.008649179);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinError(18,0.008078642);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinError(19,0.006739047);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetBinError(20,0.002934349);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetEntries(1378);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_noMassCorr_Sphericity_stack_1->SetFillColor(ci);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_noMassCorr_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_noMassCorr_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_both_noMassCorr_Sphericity_stack_2 = new TH1D("VbbHcc_both_noMassCorr_Sphericity_stack_2","",25,0,1);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinContent(1,0.2855338);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinContent(2,0.2970762);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinContent(3,0.1917342);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinContent(4,0.148652);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinContent(5,0.1210903);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinContent(6,0.1033042);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinContent(7,0.08337807);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinContent(8,0.08068939);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinContent(9,0.06496389);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinContent(10,0.05853345);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinContent(11,0.04959117);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinContent(12,0.03409354);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinContent(13,0.03159589);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinContent(14,0.02832062);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinContent(15,0.0270564);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinContent(16,0.01983216);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinContent(17,0.01187791);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinContent(18,0.007934504);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinContent(19,0.002008128);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinContent(20,0.002257864);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinContent(21,0.001809122);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinContent(22,0.0007309701);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinError(1,0.01042008);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinError(2,0.01062792);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinError(3,0.008524186);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinError(4,0.007526505);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinError(5,0.00677799);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinError(6,0.00630483);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinError(7,0.005660128);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinError(8,0.005582172);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinError(9,0.004998365);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinError(10,0.004745684);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinError(11,0.004361357);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinError(12,0.003626391);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinError(13,0.003447411);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinError(14,0.003279256);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinError(15,0.003214591);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinError(16,0.002759244);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinError(17,0.002099635);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinError(18,0.001739601);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinError(19,0.0008991581);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinError(20,0.0009273775);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinError(21,0.0008258643);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetBinError(22,0.0005176996);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetEntries(4413);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_noMassCorr_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_noMassCorr_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_noMassCorr_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_noMassCorr_Sphericity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_noMassCorr_Sphericity_stack_1","ZHcc","F");

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
   Sphericity_both_noMassCorr_16->Modified();
   Sphericity_both_noMassCorr_16->cd();
   Sphericity_both_noMassCorr_16->SetSelected(Sphericity_both_noMassCorr_16);
}
