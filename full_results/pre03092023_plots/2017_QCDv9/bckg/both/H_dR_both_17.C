#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_17()
{
//=========Macro generated from canvas: H_dR_both_17/H_dR_both_17
//=========  (Thu Feb 16 10:35:34 2023) by ROOT version 6.26/06
   TCanvas *H_dR_both_17 = new TCanvas("H_dR_both_17", "H_dR_both_17",0,0,600,600);
   H_dR_both_17->SetHighLightColor(2);
   H_dR_both_17->Range(-1.353788,-191852.6,7.264125,1406919);
   H_dR_both_17->SetFillColor(0);
   H_dR_both_17->SetFillStyle(4000);
   H_dR_both_17->SetBorderMode(0);
   H_dR_both_17->SetBorderSize(2);
   H_dR_both_17->SetLeftMargin(0.15709);
   H_dR_both_17->SetRightMargin(0.1234783);
   H_dR_both_17->SetBottomMargin(0.12);
   H_dR_both_17->SetFrameFillStyle(1000);
   H_dR_both_17->SetFrameBorderMode(0);
   H_dR_both_17->SetFrameFillStyle(1000);
   H_dR_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1247042);
   
   TH1F *st_stack_150 = new TH1F("st_stack_150","",30,0,6);
   st_stack_150->SetMinimum(0);
   st_stack_150->SetMaximum(1247042);
   st_stack_150->SetDirectory(0);
   st_stack_150->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_150->SetLineColor(ci);
   st_stack_150->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_150->GetXaxis()->SetRange(1,31);
   st_stack_150->GetXaxis()->SetLabelFont(42);
   st_stack_150->GetXaxis()->SetTitleOffset(1);
   st_stack_150->GetXaxis()->SetTitleFont(42);
   st_stack_150->GetYaxis()->SetTitle("Events/0.2");
   st_stack_150->GetYaxis()->SetLabelFont(42);
   st_stack_150->GetYaxis()->SetTitleSize(0.037);
   st_stack_150->GetYaxis()->SetTitleFont(42);
   st_stack_150->GetZaxis()->SetLabelFont(42);
   st_stack_150->GetZaxis()->SetTitleOffset(1);
   st_stack_150->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_150);
   
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(2,775.6256);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,352725.7);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,355402.6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,330757.6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,308766.6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,302443.9);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,315171.8);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,357928.4);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,387989.6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,468548.5);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,407585);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,463562.9);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,584307.4);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,631454.7);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,720475.6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,444530.6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,352603.3);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,262446.3);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,194597.2);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,159052.2);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,106429.9);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,90472.61);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,76383.37);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,39684.52);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,15754.45);
   VbbHcc_both_H_dR_stack_1->SetBinContent(27,5481.378);
   VbbHcc_both_H_dR_stack_1->SetBinContent(28,1590.539);
   VbbHcc_both_H_dR_stack_1->SetBinContent(29,13.13458);
   VbbHcc_both_H_dR_stack_1->SetBinError(2,472.1094);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,11565.45);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,12993.86);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,22287.17);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,23352.74);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,26052.32);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,22656.94);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,32455.84);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,30985.95);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,38742.73);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,22628);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,16911.88);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,39719.02);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,29026.96);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,39152.1);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,24348.95);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,28918.07);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,18739.53);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,9621.369);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,18191.98);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,7041.28);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,13354.69);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,22924.85);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,18151.89);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,2045.528);
   VbbHcc_both_H_dR_stack_1->SetBinError(27,1384.345);
   VbbHcc_both_H_dR_stack_1->SetBinError(28,541.3776);
   VbbHcc_both_H_dR_stack_1->SetBinError(29,8.998376);
   VbbHcc_both_H_dR_stack_1->SetEntries(271661);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_stack_2 = new TH1D("VbbHcc_both_H_dR_stack_2","",30,0,6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(2,22.4802);
   VbbHcc_both_H_dR_stack_2->SetBinContent(3,27273.04);
   VbbHcc_both_H_dR_stack_2->SetBinContent(4,48434.95);
   VbbHcc_both_H_dR_stack_2->SetBinContent(5,56923.38);
   VbbHcc_both_H_dR_stack_2->SetBinContent(6,61208.17);
   VbbHcc_both_H_dR_stack_2->SetBinContent(7,58989.44);
   VbbHcc_both_H_dR_stack_2->SetBinContent(8,55333.5);
   VbbHcc_both_H_dR_stack_2->SetBinContent(9,54264.75);
   VbbHcc_both_H_dR_stack_2->SetBinContent(10,57109.03);
   VbbHcc_both_H_dR_stack_2->SetBinContent(11,63574.51);
   VbbHcc_both_H_dR_stack_2->SetBinContent(12,72924.89);
   VbbHcc_both_H_dR_stack_2->SetBinContent(13,84143.89);
   VbbHcc_both_H_dR_stack_2->SetBinContent(14,96540.24);
   VbbHcc_both_H_dR_stack_2->SetBinContent(15,108879.6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(16,110885.5);
   VbbHcc_both_H_dR_stack_2->SetBinContent(17,63128.2);
   VbbHcc_both_H_dR_stack_2->SetBinContent(18,39510.77);
   VbbHcc_both_H_dR_stack_2->SetBinContent(19,26012.78);
   VbbHcc_both_H_dR_stack_2->SetBinContent(20,17211.17);
   VbbHcc_both_H_dR_stack_2->SetBinContent(21,11322.13);
   VbbHcc_both_H_dR_stack_2->SetBinContent(22,7200.092);
   VbbHcc_both_H_dR_stack_2->SetBinContent(23,4505.763);
   VbbHcc_both_H_dR_stack_2->SetBinContent(24,2640.167);
   VbbHcc_both_H_dR_stack_2->SetBinContent(25,1394.333);
   VbbHcc_both_H_dR_stack_2->SetBinContent(26,653.6944);
   VbbHcc_both_H_dR_stack_2->SetBinContent(27,259.9023);
   VbbHcc_both_H_dR_stack_2->SetBinContent(28,64.06226);
   VbbHcc_both_H_dR_stack_2->SetBinContent(29,4.720421);
   VbbHcc_both_H_dR_stack_2->SetBinError(2,1.291941);
   VbbHcc_both_H_dR_stack_2->SetBinError(3,45.61802);
   VbbHcc_both_H_dR_stack_2->SetBinError(4,60.76317);
   VbbHcc_both_H_dR_stack_2->SetBinError(5,65.79963);
   VbbHcc_both_H_dR_stack_2->SetBinError(6,68.18953);
   VbbHcc_both_H_dR_stack_2->SetBinError(7,66.94724);
   VbbHcc_both_H_dR_stack_2->SetBinError(8,64.89197);
   VbbHcc_both_H_dR_stack_2->SetBinError(9,64.3211);
   VbbHcc_both_H_dR_stack_2->SetBinError(10,66.07929);
   VbbHcc_both_H_dR_stack_2->SetBinError(11,69.81777);
   VbbHcc_both_H_dR_stack_2->SetBinError(12,74.85369);
   VbbHcc_both_H_dR_stack_2->SetBinError(13,80.50773);
   VbbHcc_both_H_dR_stack_2->SetBinError(14,86.36316);
   VbbHcc_both_H_dR_stack_2->SetBinError(15,91.81203);
   VbbHcc_both_H_dR_stack_2->SetBinError(16,92.70209);
   VbbHcc_both_H_dR_stack_2->SetBinError(17,69.7377);
   VbbHcc_both_H_dR_stack_2->SetBinError(18,54.96804);
   VbbHcc_both_H_dR_stack_2->SetBinError(19,44.39606);
   VbbHcc_both_H_dR_stack_2->SetBinError(20,35.91852);
   VbbHcc_both_H_dR_stack_2->SetBinError(21,28.96271);
   VbbHcc_both_H_dR_stack_2->SetBinError(22,22.95819);
   VbbHcc_both_H_dR_stack_2->SetBinError(23,18.03594);
   VbbHcc_both_H_dR_stack_2->SetBinError(24,13.7068);
   VbbHcc_both_H_dR_stack_2->SetBinError(25,9.869987);
   VbbHcc_both_H_dR_stack_2->SetBinError(26,6.722479);
   VbbHcc_both_H_dR_stack_2->SetBinError(27,4.171885);
   VbbHcc_both_H_dR_stack_2->SetBinError(28,2.030996);
   VbbHcc_both_H_dR_stack_2->SetBinError(29,0.5308311);
   VbbHcc_both_H_dR_stack_2->SetEntries(1.622886e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_17->Modified();
   H_dR_both_17->cd();
   H_dR_both_17->SetSelected(H_dR_both_17);
}
