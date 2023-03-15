#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_17_logY()
{
//=========Macro generated from canvas: H_dR_both_17/H_dR_both_17
//=========  (Thu Mar  9 13:18:03 2023) by ROOT version 6.26/06
   TCanvas *H_dR_both_17 = new TCanvas("H_dR_both_17", "H_dR_both_17",0,0,600,600);
   H_dR_both_17->SetHighLightColor(2);
   H_dR_both_17->Range(-1.353788,-0.4451339,7.264125,7.059696);
   H_dR_both_17->SetFillColor(0);
   H_dR_both_17->SetFillStyle(4000);
   H_dR_both_17->SetBorderMode(0);
   H_dR_both_17->SetBorderSize(2);
   H_dR_both_17->SetLogy();
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
   st->SetMinimum(10);
   st->SetMaximum(1018221);
   
   TH1F *st_stack_150 = new TH1F("st_stack_150","",30,0,6);
   st_stack_150->SetMinimum(2.853946);
   st_stack_150->SetMaximum(2038040);
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
   st_stack_150->GetYaxis()->SetTitle("Event/0.2");
   st_stack_150->GetYaxis()->SetLabelFont(42);
   st_stack_150->GetYaxis()->SetTitleSize(0.037);
   st_stack_150->GetYaxis()->SetTitleFont(42);
   st_stack_150->GetZaxis()->SetLabelFont(42);
   st_stack_150->GetZaxis()->SetTitleOffset(1);
   st_stack_150->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_150);
   
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(2,773.9061);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,368561.6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,353790.5);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,328626.4);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,304334.7);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,299770.2);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,322550.5);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,351935.2);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,386205.7);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,463654.7);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,405514.9);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,463761.4);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,577545.1);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,632186.8);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,734254.5);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,442473.8);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,347140.7);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,263535.1);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,194463.5);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,175598.7);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,108578.7);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,89026.1);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,73487.72);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,38113.42);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,15638.3);
   VbbHcc_both_H_dR_stack_1->SetBinContent(27,5410.545);
   VbbHcc_both_H_dR_stack_1->SetBinContent(28,1590.97);
   VbbHcc_both_H_dR_stack_1->SetBinContent(29,12.47485);
   VbbHcc_both_H_dR_stack_1->SetBinError(2,472.0352);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,21600.49);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,12574.03);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,20886.78);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,21752.18);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,24253.08);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,24033.81);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,30099.64);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,28880.79);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,35955.86);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,21247.73);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,16212.43);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,36873.24);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,27331.66);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,40607.01);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,22840.56);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,26827.21);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,17641);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,9356.37);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,22982.01);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,7055.478);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,12452.02);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,21134.9);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,16725.62);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,1990.024);
   VbbHcc_both_H_dR_stack_1->SetBinError(27,1321.185);
   VbbHcc_both_H_dR_stack_1->SetBinError(28,541.2109);
   VbbHcc_both_H_dR_stack_1->SetBinError(29,8.617644);
   VbbHcc_both_H_dR_stack_1->SetEntries(278187);

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
   VbbHcc_both_H_dR_stack_2->SetBinContent(2,22.33179);
   VbbHcc_both_H_dR_stack_2->SetBinContent(3,27271.87);
   VbbHcc_both_H_dR_stack_2->SetBinContent(4,48434.7);
   VbbHcc_both_H_dR_stack_2->SetBinContent(5,56934.99);
   VbbHcc_both_H_dR_stack_2->SetBinContent(6,61207.01);
   VbbHcc_both_H_dR_stack_2->SetBinContent(7,58984.67);
   VbbHcc_both_H_dR_stack_2->SetBinContent(8,55334.95);
   VbbHcc_both_H_dR_stack_2->SetBinContent(9,54259.78);
   VbbHcc_both_H_dR_stack_2->SetBinContent(10,57107.87);
   VbbHcc_both_H_dR_stack_2->SetBinContent(11,63581.11);
   VbbHcc_both_H_dR_stack_2->SetBinContent(12,72930.04);
   VbbHcc_both_H_dR_stack_2->SetBinContent(13,84162.48);
   VbbHcc_both_H_dR_stack_2->SetBinContent(14,96519.7);
   VbbHcc_both_H_dR_stack_2->SetBinContent(15,108896.9);
   VbbHcc_both_H_dR_stack_2->SetBinContent(16,110869.3);
   VbbHcc_both_H_dR_stack_2->SetBinContent(17,63135.95);
   VbbHcc_both_H_dR_stack_2->SetBinContent(18,39506.79);
   VbbHcc_both_H_dR_stack_2->SetBinContent(19,25992.71);
   VbbHcc_both_H_dR_stack_2->SetBinContent(20,17216.63);
   VbbHcc_both_H_dR_stack_2->SetBinContent(21,11317.18);
   VbbHcc_both_H_dR_stack_2->SetBinContent(22,7193.053);
   VbbHcc_both_H_dR_stack_2->SetBinContent(23,4504.108);
   VbbHcc_both_H_dR_stack_2->SetBinContent(24,2640.915);
   VbbHcc_both_H_dR_stack_2->SetBinContent(25,1392.665);
   VbbHcc_both_H_dR_stack_2->SetBinContent(26,655.2114);
   VbbHcc_both_H_dR_stack_2->SetBinContent(27,259.9361);
   VbbHcc_both_H_dR_stack_2->SetBinContent(28,63.83076);
   VbbHcc_both_H_dR_stack_2->SetBinContent(29,4.705604);
   VbbHcc_both_H_dR_stack_2->SetBinError(2,1.271464);
   VbbHcc_both_H_dR_stack_2->SetBinError(3,45.13263);
   VbbHcc_both_H_dR_stack_2->SetBinError(4,60.11896);
   VbbHcc_both_H_dR_stack_2->SetBinError(5,65.10097);
   VbbHcc_both_H_dR_stack_2->SetBinError(6,67.45337);
   VbbHcc_both_H_dR_stack_2->SetBinError(7,66.24217);
   VbbHcc_both_H_dR_stack_2->SetBinError(8,64.23877);
   VbbHcc_both_H_dR_stack_2->SetBinError(9,63.69996);
   VbbHcc_both_H_dR_stack_2->SetBinError(10,65.4725);
   VbbHcc_both_H_dR_stack_2->SetBinError(11,69.19389);
   VbbHcc_both_H_dR_stack_2->SetBinError(12,74.20671);
   VbbHcc_both_H_dR_stack_2->SetBinError(13,79.82633);
   VbbHcc_both_H_dR_stack_2->SetBinError(14,85.63744);
   VbbHcc_both_H_dR_stack_2->SetBinError(15,91.06595);
   VbbHcc_both_H_dR_stack_2->SetBinError(16,91.9396);
   VbbHcc_both_H_dR_stack_2->SetBinError(17,69.13512);
   VbbHcc_both_H_dR_stack_2->SetBinError(18,54.45173);
   VbbHcc_both_H_dR_stack_2->SetBinError(19,43.93453);
   VbbHcc_both_H_dR_stack_2->SetBinError(20,35.54573);
   VbbHcc_both_H_dR_stack_2->SetBinError(21,28.63123);
   VbbHcc_both_H_dR_stack_2->SetBinError(22,22.67824);
   VbbHcc_both_H_dR_stack_2->SetBinError(23,17.8022);
   VbbHcc_both_H_dR_stack_2->SetBinError(24,13.53835);
   VbbHcc_both_H_dR_stack_2->SetBinError(25,9.733515);
   VbbHcc_both_H_dR_stack_2->SetBinError(26,6.640872);
   VbbHcc_both_H_dR_stack_2->SetBinError(27,4.117584);
   VbbHcc_both_H_dR_stack_2->SetBinError(28,1.998801);
   VbbHcc_both_H_dR_stack_2->SetBinError(29,0.5245819);
   VbbHcc_both_H_dR_stack_2->SetEntries(1.677555e+07);

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_17->Modified();
   H_dR_both_17->cd();
   H_dR_both_17->SetSelected(H_dR_both_17);
}
