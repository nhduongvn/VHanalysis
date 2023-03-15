#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_algo_18_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_18/H_dR_Bj1_algo_18
//=========  (Thu Mar  9 13:18:02 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_algo_18 = new TCanvas("H_dR_Bj1_algo_18", "H_dR_Bj1_algo_18",0,0,600,600);
   H_dR_Bj1_algo_18->SetHighLightColor(2);
   H_dR_Bj1_algo_18->Range(-1.310117,-0.2700386,7.029799,6.180014);
   H_dR_Bj1_algo_18->SetFillColor(0);
   H_dR_Bj1_algo_18->SetFillStyle(4000);
   H_dR_Bj1_algo_18->SetBorderMode(0);
   H_dR_Bj1_algo_18->SetBorderSize(2);
   H_dR_Bj1_algo_18->SetLogy();
   H_dR_Bj1_algo_18->SetLeftMargin(0.15709);
   H_dR_Bj1_algo_18->SetRightMargin(0.1234783);
   H_dR_Bj1_algo_18->SetBottomMargin(0.12);
   H_dR_Bj1_algo_18->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_18->SetFrameBorderMode(0);
   H_dR_Bj1_algo_18->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(184943);
   
   TH1F *st_stack_111 = new TH1F("st_stack_111","",30,0,6);
   st_stack_111->SetMinimum(3.1913);
   st_stack_111->SetMaximum(342774.7);
   st_stack_111->SetDirectory(0);
   st_stack_111->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_111->SetLineColor(ci);
   st_stack_111->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_111->GetXaxis()->SetRange(1,30);
   st_stack_111->GetXaxis()->SetLabelFont(42);
   st_stack_111->GetXaxis()->SetTitleOffset(1);
   st_stack_111->GetXaxis()->SetTitleFont(42);
   st_stack_111->GetYaxis()->SetTitle("Event/0.2");
   st_stack_111->GetYaxis()->SetLabelFont(42);
   st_stack_111->GetYaxis()->SetTitleSize(0.037);
   st_stack_111->GetYaxis()->SetTitleFont(42);
   st_stack_111->GetZaxis()->SetLabelFont(42);
   st_stack_111->GetZaxis()->SetTitleOffset(1);
   st_stack_111->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_111);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(1,1737.022);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,87309.5);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,129365.6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,105789.2);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,145054.9);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,100255.9);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,118181);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,81948.29);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,93695.43);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,97627);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,119400.4);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,53245.47);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,81621.64);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,85015.2);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,46969.22);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,52223.33);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,26285.99);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(18,26587.73);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(19,12870.92);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(20,11760.89);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(21,5374.256);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(22,1800.147);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(23,5182.996);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(24,1038.692);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(25,471.1621);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(26,103.2031);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(27,24.75598);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(28,10.66125);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(1,1737.022);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,8035.784);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,9584.969);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,8590.745);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,24322.03);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,8787.699);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,23628.8);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,7546.526);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,8530.574);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,23278.12);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,32086.61);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,5010.342);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,22674.65);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,22971.12);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,4435.016);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,4643.206);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,2803.106);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(18,4058.011);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(19,1710.693);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(20,2804.879);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(21,1150.829);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(22,606.4666);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(23,2530.476);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(24,493.9505);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(25,346.4912);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(26,48.29744);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(27,17.50512);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(28,7.538641);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(24627);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(1,1.618918);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,2389.276);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,7114.286);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,8663.313);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,8447.718);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,7653.64);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,6889.206);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,6089.239);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,5325.794);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,4682.004);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,4127.715);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,3723.979);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,3408.872);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,3194.514);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,3032.646);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,2780.564);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,1733.947);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,1132.325);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(19,758.9557);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,491.4748);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(21,300.742);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(22,185.0208);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(23,105.0513);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(24,55.27553);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(25,28.05128);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(26,14.12072);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(27,6.419807);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(28,2.403413);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(29,1.348755);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(30,0.6951175);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(31,1.010605);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(1,0.3027362);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,11.88181);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,20.64168);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,22.93291);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,22.81052);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,21.766);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,20.65048);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,19.37396);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,18.07646);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,16.91295);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,15.8371);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,15.03326);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,14.34525);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,13.88417);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,13.5104);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,12.92759);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,10.19945);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,8.228076);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(19,6.726587);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,5.409328);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(21,4.225666);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(22,3.320373);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(23,2.513043);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(24,1.807334);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(25,1.300198);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(26,0.9164253);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(27,0.626582);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(28,0.3834544);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(29,0.2817991);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(30,0.2044662);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(31,0.2435073);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(1407385);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_algo_18->Modified();
   H_dR_Bj1_algo_18->cd();
   H_dR_Bj1_algo_18->SetSelected(H_dR_Bj1_algo_18);
}
