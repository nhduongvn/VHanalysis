#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenJet_all__signal_16_logY()
{
//=========Macro generated from canvas: nGenJet_all__signal_16/nGenJet_all__signal_16
//=========  (Mon Mar  6 10:58:23 2023) by ROOT version 6.26/06
   TCanvas *nGenJet_all__signal_16 = new TCanvas("nGenJet_all__signal_16", "nGenJet_all__signal_16",0,0,600,600);
   nGenJet_all__signal_16->SetHighLightColor(2);
   nGenJet_all__signal_16->Range(-3.775293,0.5562308,17.0745,2.520783);
   nGenJet_all__signal_16->SetFillColor(0);
   nGenJet_all__signal_16->SetFillStyle(4000);
   nGenJet_all__signal_16->SetBorderMode(0);
   nGenJet_all__signal_16->SetBorderSize(2);
   nGenJet_all__signal_16->SetLogy();
   nGenJet_all__signal_16->SetLeftMargin(0.15709);
   nGenJet_all__signal_16->SetRightMargin(0.1234783);
   nGenJet_all__signal_16->SetBottomMargin(0.12);
   nGenJet_all__signal_16->SetFrameFillStyle(1000);
   nGenJet_all__signal_16->SetFrameBorderMode(0);
   nGenJet_all__signal_16->SetFrameFillStyle(1000);
   nGenJet_all__signal_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_1 = new TH1F("st_stack_1","",15,-0.5,14.5);
   st_stack_1->SetMinimum(6.194084);
   st_stack_1->SetMaximum(211.0221);
   st_stack_1->SetDirectory(0);
   st_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_1->SetLineColor(ci);
   st_stack_1->GetXaxis()->SetTitle("Gen Jet multiplicity");
   st_stack_1->GetXaxis()->SetLabelFont(42);
   st_stack_1->GetXaxis()->SetTitleOffset(1);
   st_stack_1->GetXaxis()->SetTitleFont(42);
   st_stack_1->GetYaxis()->SetTitle("Events/1.0");
   st_stack_1->GetYaxis()->SetLabelFont(42);
   st_stack_1->GetYaxis()->SetTitleSize(0.037);
   st_stack_1->GetYaxis()->SetTitleFont(42);
   st_stack_1->GetZaxis()->SetLabelFont(42);
   st_stack_1->GetZaxis()->SetTitleOffset(1);
   st_stack_1->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_1);
   
   
   TH1D *nGenJet_all_stack_1 = new TH1D("nGenJet_all_stack_1","",15,-0.5,14.5);
   nGenJet_all_stack_1->SetBinContent(1,0.009100286);
   nGenJet_all_stack_1->SetBinContent(2,0.02388486);
   nGenJet_all_stack_1->SetBinContent(3,1.577115);
   nGenJet_all_stack_1->SetBinContent(4,24.47291);
   nGenJet_all_stack_1->SetBinContent(5,118.962);
   nGenJet_all_stack_1->SetBinContent(6,154.724);
   nGenJet_all_stack_1->SetBinContent(7,134.9465);
   nGenJet_all_stack_1->SetBinContent(8,96.71543);
   nGenJet_all_stack_1->SetBinContent(9,62.07195);
   nGenJet_all_stack_1->SetBinContent(10,36.78211);
   nGenJet_all_stack_1->SetBinContent(11,20.27946);
   nGenJet_all_stack_1->SetBinContent(12,10.82185);
   nGenJet_all_stack_1->SetBinContent(13,5.468355);
   nGenJet_all_stack_1->SetBinContent(14,2.604524);
   nGenJet_all_stack_1->SetBinContent(15,1.210447);
   nGenJet_all_stack_1->SetBinContent(16,1.00491);
   nGenJet_all_stack_1->SetBinError(1,0.005260387);
   nGenJet_all_stack_1->SetBinError(2,0.00944563);
   nGenJet_all_stack_1->SetBinError(3,0.07388541);
   nGenJet_all_stack_1->SetBinError(4,0.2850156);
   nGenJet_all_stack_1->SetBinError(5,0.6275468);
   nGenJet_all_stack_1->SetBinError(6,0.6983263);
   nGenJet_all_stack_1->SetBinError(7,0.642812);
   nGenJet_all_stack_1->SetBinError(8,0.5399339);
   nGenJet_all_stack_1->SetBinError(9,0.430399);
   nGenJet_all_stack_1->SetBinError(10,0.330231);
   nGenJet_all_stack_1->SetBinError(11,0.2448445);
   nGenJet_all_stack_1->SetBinError(12,0.1784172);
   nGenJet_all_stack_1->SetBinError(13,0.1260933);
   nGenJet_all_stack_1->SetBinError(14,0.08714953);
   nGenJet_all_stack_1->SetBinError(15,0.05922723);
   nGenJet_all_stack_1->SetBinError(16,0.05374508);
   nGenJet_all_stack_1->SetEntries(249005);

   ci = TColor::GetColor("#cc0000");
   nGenJet_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenJet_all_stack_1->SetLineColor(ci);
   nGenJet_all_stack_1->GetXaxis()->SetRange(1,15);
   nGenJet_all_stack_1->GetXaxis()->SetLabelFont(42);
   nGenJet_all_stack_1->GetXaxis()->SetTitleOffset(1);
   nGenJet_all_stack_1->GetXaxis()->SetTitleFont(42);
   nGenJet_all_stack_1->GetYaxis()->SetLabelFont(42);
   nGenJet_all_stack_1->GetYaxis()->SetTitleFont(42);
   nGenJet_all_stack_1->GetZaxis()->SetLabelFont(42);
   nGenJet_all_stack_1->GetZaxis()->SetTitleOffset(1);
   nGenJet_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(nGenJet_all_stack_1,"");
   
   TH1D *nGenJet_all_stack_2 = new TH1D("nGenJet_all_stack_2","",15,-0.5,14.5);
   nGenJet_all_stack_2->SetBinContent(3,0.01946085);
   nGenJet_all_stack_2->SetBinContent(4,0.6986289);
   nGenJet_all_stack_2->SetBinContent(5,6.052248);
   nGenJet_all_stack_2->SetBinContent(6,14.66584);
   nGenJet_all_stack_2->SetBinContent(7,19.84295);
   nGenJet_all_stack_2->SetBinContent(8,18.38089);
   nGenJet_all_stack_2->SetBinContent(9,13.78775);
   nGenJet_all_stack_2->SetBinContent(10,9.013851);
   nGenJet_all_stack_2->SetBinContent(11,5.193149);
   nGenJet_all_stack_2->SetBinContent(12,2.845994);
   nGenJet_all_stack_2->SetBinContent(13,1.401316);
   nGenJet_all_stack_2->SetBinContent(14,0.6663999);
   nGenJet_all_stack_2->SetBinContent(15,0.3224609);
   nGenJet_all_stack_2->SetBinContent(16,0.2675379);
   nGenJet_all_stack_2->SetBinError(3,0.002739486);
   nGenJet_all_stack_2->SetBinError(4,0.01638135);
   nGenJet_all_stack_2->SetBinError(5,0.04821818);
   nGenJet_all_stack_2->SetBinError(6,0.07495784);
   nGenJet_all_stack_2->SetBinError(7,0.08713804);
   nGenJet_all_stack_2->SetBinError(8,0.08376941);
   nGenJet_all_stack_2->SetBinError(9,0.0725078);
   nGenJet_all_stack_2->SetBinError(10,0.05859488);
   nGenJet_all_stack_2->SetBinError(11,0.0444277);
   nGenJet_all_stack_2->SetBinError(12,0.03285461);
   nGenJet_all_stack_2->SetBinError(13,0.02308402);
   nGenJet_all_stack_2->SetBinError(14,0.01589539);
   nGenJet_all_stack_2->SetBinError(15,0.0110392);
   nGenJet_all_stack_2->SetBinError(16,0.01006262);
   nGenJet_all_stack_2->SetEntries(248576);

   ci = TColor::GetColor("#00cc00");
   nGenJet_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenJet_all_stack_2->SetLineColor(ci);
   nGenJet_all_stack_2->GetXaxis()->SetRange(1,15);
   nGenJet_all_stack_2->GetXaxis()->SetLabelFont(42);
   nGenJet_all_stack_2->GetXaxis()->SetTitleOffset(1);
   nGenJet_all_stack_2->GetXaxis()->SetTitleFont(42);
   nGenJet_all_stack_2->GetYaxis()->SetLabelFont(42);
   nGenJet_all_stack_2->GetYaxis()->SetTitleFont(42);
   nGenJet_all_stack_2->GetZaxis()->SetLabelFont(42);
   nGenJet_all_stack_2->GetZaxis()->SetTitleOffset(1);
   nGenJet_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(nGenJet_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nGenJet_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("nGenJet_all_stack_1","ZHcc","F");

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
   nGenJet_all__signal_16->Modified();
   nGenJet_all__signal_16->cd();
   nGenJet_all__signal_16->SetSelected(nGenJet_all__signal_16);
}
