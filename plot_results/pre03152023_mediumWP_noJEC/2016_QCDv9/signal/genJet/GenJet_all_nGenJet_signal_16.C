#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenJet_signal_16()
{
//=========Macro generated from canvas: GenJet_all_nGenJet_signal_16/GenJet_all_nGenJet_signal_16
//=========  (Thu Mar  9 15:52:35 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenJet_signal_16 = new TCanvas("GenJet_all_nGenJet_signal_16", "GenJet_all_nGenJet_signal_16",0,0,600,600);
   GenJet_all_nGenJet_signal_16->SetHighLightColor(2);
   GenJet_all_nGenJet_signal_16->Range(-4.867058,-31.39757,22.93266,230.2488);
   GenJet_all_nGenJet_signal_16->SetFillColor(0);
   GenJet_all_nGenJet_signal_16->SetFillStyle(4000);
   GenJet_all_nGenJet_signal_16->SetBorderMode(0);
   GenJet_all_nGenJet_signal_16->SetBorderSize(2);
   GenJet_all_nGenJet_signal_16->SetLeftMargin(0.15709);
   GenJet_all_nGenJet_signal_16->SetRightMargin(0.1234783);
   GenJet_all_nGenJet_signal_16->SetBottomMargin(0.12);
   GenJet_all_nGenJet_signal_16->SetFrameFillStyle(1000);
   GenJet_all_nGenJet_signal_16->SetFrameBorderMode(0);
   GenJet_all_nGenJet_signal_16->SetFrameFillStyle(1000);
   GenJet_all_nGenJet_signal_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(204.0842);
   
   TH1F *st_stack_1 = new TH1F("st_stack_1","",20,-0.5,19.5);
   st_stack_1->SetMinimum(0);
   st_stack_1->SetMaximum(204.0842);
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
   st_stack_1->GetYaxis()->SetTitle("Event/1.0");
   st_stack_1->GetYaxis()->SetLabelFont(42);
   st_stack_1->GetYaxis()->SetTitleSize(0.037);
   st_stack_1->GetYaxis()->SetTitleFont(42);
   st_stack_1->GetZaxis()->SetLabelFont(42);
   st_stack_1->GetZaxis()->SetTitleOffset(1);
   st_stack_1->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_1);
   
   
   TH1D *GenJet_all_nGenJet_stack_1 = new TH1D("GenJet_all_nGenJet_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenJet_stack_1->SetBinContent(1,0.009100286);
   GenJet_all_nGenJet_stack_1->SetBinContent(2,0.02388486);
   GenJet_all_nGenJet_stack_1->SetBinContent(3,1.577115);
   GenJet_all_nGenJet_stack_1->SetBinContent(4,24.47291);
   GenJet_all_nGenJet_stack_1->SetBinContent(5,118.962);
   GenJet_all_nGenJet_stack_1->SetBinContent(6,154.724);
   GenJet_all_nGenJet_stack_1->SetBinContent(7,134.9465);
   GenJet_all_nGenJet_stack_1->SetBinContent(8,96.71543);
   GenJet_all_nGenJet_stack_1->SetBinContent(9,62.07195);
   GenJet_all_nGenJet_stack_1->SetBinContent(10,36.78211);
   GenJet_all_nGenJet_stack_1->SetBinContent(11,20.27946);
   GenJet_all_nGenJet_stack_1->SetBinContent(12,10.82185);
   GenJet_all_nGenJet_stack_1->SetBinContent(13,5.468355);
   GenJet_all_nGenJet_stack_1->SetBinContent(14,2.604524);
   GenJet_all_nGenJet_stack_1->SetBinContent(15,1.210447);
   GenJet_all_nGenJet_stack_1->SetBinContent(16,0.5503927);
   GenJet_all_nGenJet_stack_1->SetBinContent(17,0.2136587);
   GenJet_all_nGenJet_stack_1->SetBinContent(18,0.1368159);
   GenJet_all_nGenJet_stack_1->SetBinContent(19,0.06430851);
   GenJet_all_nGenJet_stack_1->SetBinContent(20,0.01753576);
   GenJet_all_nGenJet_stack_1->SetBinContent(21,0.02219827);
   GenJet_all_nGenJet_stack_1->SetBinError(1,0.005260387);
   GenJet_all_nGenJet_stack_1->SetBinError(2,0.00944563);
   GenJet_all_nGenJet_stack_1->SetBinError(3,0.07388541);
   GenJet_all_nGenJet_stack_1->SetBinError(4,0.2850156);
   GenJet_all_nGenJet_stack_1->SetBinError(5,0.6275468);
   GenJet_all_nGenJet_stack_1->SetBinError(6,0.6983263);
   GenJet_all_nGenJet_stack_1->SetBinError(7,0.642812);
   GenJet_all_nGenJet_stack_1->SetBinError(8,0.5399339);
   GenJet_all_nGenJet_stack_1->SetBinError(9,0.430399);
   GenJet_all_nGenJet_stack_1->SetBinError(10,0.330231);
   GenJet_all_nGenJet_stack_1->SetBinError(11,0.2448445);
   GenJet_all_nGenJet_stack_1->SetBinError(12,0.1784172);
   GenJet_all_nGenJet_stack_1->SetBinError(13,0.1260933);
   GenJet_all_nGenJet_stack_1->SetBinError(14,0.08714953);
   GenJet_all_nGenJet_stack_1->SetBinError(15,0.05922723);
   GenJet_all_nGenJet_stack_1->SetBinError(16,0.03973578);
   GenJet_all_nGenJet_stack_1->SetBinError(17,0.02477007);
   GenJet_all_nGenJet_stack_1->SetBinError(18,0.01991992);
   GenJet_all_nGenJet_stack_1->SetBinError(19,0.01362091);
   GenJet_all_nGenJet_stack_1->SetBinError(20,0.007169086);
   GenJet_all_nGenJet_stack_1->SetBinError(21,0.007894138);
   GenJet_all_nGenJet_stack_1->SetEntries(249005);

   ci = TColor::GetColor("#cc0000");
   GenJet_all_nGenJet_stack_1->SetFillColor(ci);
   GenJet_all_nGenJet_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenJet_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenJet_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenJet_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenJet_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenJet_stack_1,"");
   
   TH1D *GenJet_all_nGenJet_stack_2 = new TH1D("GenJet_all_nGenJet_stack_2","",20,-0.5,19.5);
   GenJet_all_nGenJet_stack_2->SetBinContent(3,0.01946085);
   GenJet_all_nGenJet_stack_2->SetBinContent(4,0.6986289);
   GenJet_all_nGenJet_stack_2->SetBinContent(5,6.052248);
   GenJet_all_nGenJet_stack_2->SetBinContent(6,14.66584);
   GenJet_all_nGenJet_stack_2->SetBinContent(7,19.84295);
   GenJet_all_nGenJet_stack_2->SetBinContent(8,18.38089);
   GenJet_all_nGenJet_stack_2->SetBinContent(9,13.78775);
   GenJet_all_nGenJet_stack_2->SetBinContent(10,9.013851);
   GenJet_all_nGenJet_stack_2->SetBinContent(11,5.193149);
   GenJet_all_nGenJet_stack_2->SetBinContent(12,2.845994);
   GenJet_all_nGenJet_stack_2->SetBinContent(13,1.401316);
   GenJet_all_nGenJet_stack_2->SetBinContent(14,0.6663999);
   GenJet_all_nGenJet_stack_2->SetBinContent(15,0.3224609);
   GenJet_all_nGenJet_stack_2->SetBinContent(16,0.149997);
   GenJet_all_nGenJet_stack_2->SetBinContent(17,0.06665144);
   GenJet_all_nGenJet_stack_2->SetBinContent(18,0.03039314);
   GenJet_all_nGenJet_stack_2->SetBinContent(19,0.01261241);
   GenJet_all_nGenJet_stack_2->SetBinContent(20,0.003371097);
   GenJet_all_nGenJet_stack_2->SetBinContent(21,0.00451285);
   GenJet_all_nGenJet_stack_2->SetBinError(3,0.002739486);
   GenJet_all_nGenJet_stack_2->SetBinError(4,0.01638135);
   GenJet_all_nGenJet_stack_2->SetBinError(5,0.04821818);
   GenJet_all_nGenJet_stack_2->SetBinError(6,0.07495784);
   GenJet_all_nGenJet_stack_2->SetBinError(7,0.08713804);
   GenJet_all_nGenJet_stack_2->SetBinError(8,0.08376941);
   GenJet_all_nGenJet_stack_2->SetBinError(9,0.0725078);
   GenJet_all_nGenJet_stack_2->SetBinError(10,0.05859488);
   GenJet_all_nGenJet_stack_2->SetBinError(11,0.0444277);
   GenJet_all_nGenJet_stack_2->SetBinError(12,0.03285461);
   GenJet_all_nGenJet_stack_2->SetBinError(13,0.02308402);
   GenJet_all_nGenJet_stack_2->SetBinError(14,0.01589539);
   GenJet_all_nGenJet_stack_2->SetBinError(15,0.0110392);
   GenJet_all_nGenJet_stack_2->SetBinError(16,0.007531363);
   GenJet_all_nGenJet_stack_2->SetBinError(17,0.005011645);
   GenJet_all_nGenJet_stack_2->SetBinError(18,0.003420803);
   GenJet_all_nGenJet_stack_2->SetBinError(19,0.002201615);
   GenJet_all_nGenJet_stack_2->SetBinError(20,0.001075598);
   GenJet_all_nGenJet_stack_2->SetBinError(21,0.001308584);
   GenJet_all_nGenJet_stack_2->SetEntries(248576);

   ci = TColor::GetColor("#00cc00");
   GenJet_all_nGenJet_stack_2->SetFillColor(ci);
   GenJet_all_nGenJet_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenJet_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenJet_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenJet_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenJet_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_all_nGenJet_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("GenJet_all_nGenJet_stack_1","ZHcc","F");

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
   GenJet_all_nGenJet_signal_16->Modified();
   GenJet_all_nGenJet_signal_16->cd();
   GenJet_all_nGenJet_signal_16->SetSelected(GenJet_all_nGenJet_signal_16);
}
