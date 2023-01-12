#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_17_logY()
{
//=========Macro generated from canvas: Z_dR_tags_17/Z_dR_tags_17
//=========  (Mon Dec 19 11:15:37 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_tags_17 = new TCanvas("Z_dR_tags_17", "Z_dR_tags_17",0,0,600,600);
   Z_dR_tags_17->SetHighLightColor(2);
   Z_dR_tags_17->Range(-1.310117,-1.06105,7.029799,10.35946);
   Z_dR_tags_17->SetFillColor(0);
   Z_dR_tags_17->SetFillStyle(4000);
   Z_dR_tags_17->SetBorderMode(0);
   Z_dR_tags_17->SetBorderSize(2);
   Z_dR_tags_17->SetLogy();
   Z_dR_tags_17->SetLeftMargin(0.15709);
   Z_dR_tags_17->SetRightMargin(0.1234783);
   Z_dR_tags_17->SetBottomMargin(0.12);
   Z_dR_tags_17->SetFrameFillStyle(1000);
   Z_dR_tags_17->SetFrameBorderMode(0);
   Z_dR_tags_17->SetFrameFillStyle(1000);
   Z_dR_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(6.43975e+08);
   
   TH1F *st_stack_18 = new TH1F("st_stack_18","",30,0,6);
   st_stack_18->SetMinimum(2.038971);
   st_stack_18->SetMaximum(1.649718e+09);
   st_stack_18->SetDirectory(0);
   st_stack_18->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_18->SetLineColor(ci);
   st_stack_18->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_18->GetXaxis()->SetRange(1,30);
   st_stack_18->GetXaxis()->SetLabelFont(42);
   st_stack_18->GetXaxis()->SetTitleOffset(1);
   st_stack_18->GetXaxis()->SetTitleFont(42);
   st_stack_18->GetYaxis()->SetTitle("Events/0.2");
   st_stack_18->GetYaxis()->SetLabelFont(42);
   st_stack_18->GetYaxis()->SetTitleSize(0.037);
   st_stack_18->GetYaxis()->SetTitleFont(42);
   st_stack_18->GetZaxis()->SetLabelFont(42);
   st_stack_18->GetZaxis()->SetTitleOffset(1);
   st_stack_18->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_18);
   
   
   TH1D *VbbHcc_tags_Z_dR_stack_1 = new TH1D("VbbHcc_tags_Z_dR_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(2,2059.874);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,4556678);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,5724026);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,4458699);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,4022807);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,3740916);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,3865498);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,3482161);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,3755669);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,3788305);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,4029432);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,4537136);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,4911220);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,5356870);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,6121388);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,3936867);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,2393147);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,1713752);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,1271831);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,973953.3);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,578478);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(23,494765.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(24,222107.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(25,140881.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(26,78848.37);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(27,37135.71);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(28,24617.41);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(29,10.18727);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(2,643.4225);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,137186.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,167598.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,160875.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,158883.8);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,161990.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,172996.7);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,158449.7);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,169805.3);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,173389);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,175048.8);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,191154);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,197534.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,202503.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,225507.3);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,186866.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,140188.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,118856.5);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,104723.5);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,95893.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,69982.58);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(23,69185.32);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(24,37487.12);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(25,38276.17);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(26,24557.74);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(27,13274.82);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(28,17558.29);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(29,9.805245);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(589663);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_2 = new TH1D("VbbHcc_tags_Z_dR_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(2,27.26697);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,42876.73);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,86089.75);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,102784.7);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,125339.3);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,146903.1);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,167430.9);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,187614.9);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,208275.9);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,230128.7);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,253799.1);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,278476.5);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,302747.2);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,325078.1);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,318362.2);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,167754.2);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,95955.43);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,57112.33);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,33830.42);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,19603.31);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,11086.94);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,5986.007);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,3059.316);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,1454.52);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(26,613.2071);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(27,206.3073);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(28,46.43931);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(29,2.445498);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(2,1.394264);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,55.65978);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,79.07521);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,86.49111);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,95.55274);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,103.4899);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,110.4999);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,116.9997);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,123.2909);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,129.647);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,136.2178);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,142.7649);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,148.9745);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,154.4658);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,152.9638);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,111.0324);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,83.92956);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,64.71945);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,49.77449);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,37.8352);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,28.40221);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,20.80659);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,14.78899);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,10.19777);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(26,6.58904);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(27,3.757219);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(28,1.771425);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(29,0.4030783);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(4.80993e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_1","QCD","F");

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
   Z_dR_tags_17->Modified();
   Z_dR_tags_17->cd();
   Z_dR_tags_17->SetSelected(Z_dR_tags_17);
}
