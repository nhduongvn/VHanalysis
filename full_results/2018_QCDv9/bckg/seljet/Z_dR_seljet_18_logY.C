#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_seljet_18_logY()
{
//=========Macro generated from canvas: Z_dR_seljet_18/Z_dR_seljet_18
//=========  (Mon Dec 19 11:15:41 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_seljet_18 = new TCanvas("Z_dR_seljet_18", "Z_dR_seljet_18",0,0,600,600);
   Z_dR_seljet_18->SetHighLightColor(2);
   Z_dR_seljet_18->Range(-1.310117,0.3690623,7.029799,13.1479);
   Z_dR_seljet_18->SetFillColor(0);
   Z_dR_seljet_18->SetFillStyle(4000);
   Z_dR_seljet_18->SetBorderMode(0);
   Z_dR_seljet_18->SetBorderSize(2);
   Z_dR_seljet_18->SetLogy();
   Z_dR_seljet_18->SetLeftMargin(0.15709);
   Z_dR_seljet_18->SetRightMargin(0.1234783);
   Z_dR_seljet_18->SetBottomMargin(0.12);
   Z_dR_seljet_18->SetFrameFillStyle(1000);
   Z_dR_seljet_18->SetFrameBorderMode(0);
   Z_dR_seljet_18->SetFrameFillStyle(1000);
   Z_dR_seljet_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(431.2201);
   st->SetMaximum(2.687079e+11);
   
   TH1F *st_stack_243 = new TH1F("st_stack_243","",30,0,6);
   st_stack_243->SetMinimum(79.89566);
   st_stack_243->SetMaximum(7.413426e+11);
   st_stack_243->SetDirectory(0);
   st_stack_243->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_243->SetLineColor(ci);
   st_stack_243->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_243->GetXaxis()->SetRange(1,30);
   st_stack_243->GetXaxis()->SetLabelFont(42);
   st_stack_243->GetXaxis()->SetTitleOffset(1);
   st_stack_243->GetXaxis()->SetTitleFont(42);
   st_stack_243->GetYaxis()->SetTitle("Events/0.2");
   st_stack_243->GetYaxis()->SetLabelFont(42);
   st_stack_243->GetYaxis()->SetTitleSize(0.037);
   st_stack_243->GetYaxis()->SetTitleFont(42);
   st_stack_243->GetZaxis()->SetLabelFont(42);
   st_stack_243->GetZaxis()->SetTitleOffset(1);
   st_stack_243->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_243);
   
   
   TH1D *VbbHcc_seljet_Z_dR_stack_1 = new TH1D("VbbHcc_seljet_Z_dR_stack_1","",30,0,6);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(2,1050539);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(3,7.80893e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(4,1.431223e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(5,1.205503e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(6,1.193318e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(7,1.247174e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(8,1.305367e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(9,1.410358e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(10,1.525372e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(11,1.680744e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(12,1.862637e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(13,2.080226e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(14,2.321501e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(15,2.564631e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(16,2.684405e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(17,1.749184e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(18,1.257473e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(19,9.405295e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(20,7.082841e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(21,5.212783e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(22,3.751818e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(23,2.57805e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(24,1.660552e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(25,9.807301e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(26,5.079752e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(27,2.263124e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(28,6640896);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(29,431118);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(2,100052.9);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(3,2559995);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(4,3711331);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(5,3645340);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(6,3492796);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(7,3747573);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(8,3757127);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(9,3906150);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(10,4096826);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(11,4505220);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(12,4520838);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(13,5013167);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(14,5373666);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(15,5640854);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(16,5771310);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(17,4827438);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(18,3979056);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(19,3736061);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(20,3024915);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(21,2577732);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(22,2173402);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(23,1798681);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(24,1461998);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(25,1178479);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(26,818596.7);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(27,549206.5);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(28,298521.8);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(29,73163.74);
   VbbHcc_seljet_Z_dR_stack_1->SetEntries(7.642441e+07);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_seljet_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_seljet_Z_dR_stack_2 = new TH1D("VbbHcc_seljet_Z_dR_stack_2","",30,0,6);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(2,609.6492);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(3,570503.7);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(4,1117731);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(5,1358517);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(6,1666517);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(7,1929418);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(8,2127096);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(9,2265766);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(10,2360267);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(11,2440216);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(12,2521538);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(13,2609127);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(14,2700830);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(15,2788212);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(16,2673848);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(17,1450979);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(18,889370.5);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(19,582440.4);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(20,387510.4);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(21,256435.7);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(22,165685.7);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(23,103335);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(24,60442.99);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(25,31972.03);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(26,15160.42);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(27,6023.893);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(28,1567.062);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(29,102.125);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(2,7.77444);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(3,230.5708);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(4,322.6934);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(5,357.1016);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(6,396.2477);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(7,425.8886);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(8,447.1542);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(9,461.2651);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(10,471.1015);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(11,479.5581);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(12,487.9943);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(13,496.5921);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(14,505.9216);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(15,514.6399);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(16,504.2217);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(17,371.1365);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(18,289.5268);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(19,233.6992);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(20,190.3399);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(21,154.6964);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(22,123.7072);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(23,97.74379);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(24,74.29387);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(25,53.6169);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(26,36.88013);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(27,23.55913);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(28,12.09665);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(29,3.796149);
   VbbHcc_seljet_Z_dR_stack_2->SetEntries(4.424954e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_seljet_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Z_dR_stack_1","QCD","F");

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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_seljet_18->Modified();
   Z_dR_seljet_18->cd();
   Z_dR_seljet_18->SetSelected(Z_dR_seljet_18);
}
