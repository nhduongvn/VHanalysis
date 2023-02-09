#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_alljet_16()
{
//=========Macro generated from canvas: H_dR_alljet_16/H_dR_alljet_16
//=========  (Wed Jan 18 11:43:13 2023) by ROOT version 6.26/06
   TCanvas *H_dR_alljet_16 = new TCanvas("H_dR_alljet_16", "H_dR_alljet_16",0,0,600,600);
   H_dR_alljet_16->SetHighLightColor(2);
   H_dR_alljet_16->Range(-1.353788,-2.574668e+10,7.264125,1.88809e+11);
   H_dR_alljet_16->SetFillColor(0);
   H_dR_alljet_16->SetFillStyle(4000);
   H_dR_alljet_16->SetBorderMode(0);
   H_dR_alljet_16->SetBorderSize(2);
   H_dR_alljet_16->SetLeftMargin(0.15709);
   H_dR_alljet_16->SetRightMargin(0.1234783);
   H_dR_alljet_16->SetBottomMargin(0.12);
   H_dR_alljet_16->SetFrameFillStyle(1000);
   H_dR_alljet_16->SetFrameBorderMode(0);
   H_dR_alljet_16->SetFrameFillStyle(1000);
   H_dR_alljet_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.673534e+11);
   
   TH1F *st_stack_213 = new TH1F("st_stack_213","",30,0,6);
   st_stack_213->SetMinimum(0);
   st_stack_213->SetMaximum(1.673534e+11);
   st_stack_213->SetDirectory(0);
   st_stack_213->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_213->SetLineColor(ci);
   st_stack_213->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_213->GetXaxis()->SetRange(1,31);
   st_stack_213->GetXaxis()->SetLabelFont(42);
   st_stack_213->GetXaxis()->SetTitleOffset(1);
   st_stack_213->GetXaxis()->SetTitleFont(42);
   st_stack_213->GetYaxis()->SetTitle("Events/0.2");
   st_stack_213->GetYaxis()->SetLabelFont(42);
   st_stack_213->GetYaxis()->SetTitleSize(0.037);
   st_stack_213->GetYaxis()->SetTitleFont(42);
   st_stack_213->GetZaxis()->SetLabelFont(42);
   st_stack_213->GetZaxis()->SetTitleOffset(1);
   st_stack_213->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_213);
   
   
   TH1D *VbbHcc_alljet_H_dR_stack_1 = new TH1D("VbbHcc_alljet_H_dR_stack_1","",30,0,6);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(2,4586653);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(3,2.309819e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(4,4.497211e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(5,3.898027e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(6,4.292447e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(7,5.028391e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(8,6.181642e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(9,7.962647e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(10,1.081726e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(11,1.542062e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(12,2.275771e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(13,3.450566e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(14,5.257954e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(15,7.99802e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(16,1.115646e+11);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(17,7.697135e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(18,5.813285e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(19,4.64013e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(20,3.766526e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(21,3.085513e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(22,2.537153e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(23,2.092872e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(24,1.726099e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(25,1.421706e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(26,1.170019e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(27,9.613306e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(28,7.885117e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(29,6.468308e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(30,5.27862e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(31,1.991324e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(2,277466.5);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(3,6194537);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(4,8705498);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(5,8108111);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(6,8506596);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(7,9196832);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(8,1.018337e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(9,1.153019e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(10,1.339711e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(11,1.593189e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(12,1.926622e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(13,2.361076e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(14,2.899639e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(15,3.55541e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(16,4.178154e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(17,3.478848e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(18,3.031178e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(19,2.714445e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(20,2.451099e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(21,2.223017e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(22,2.020373e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(23,1.838788e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(24,1.673647e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(25,1.521844e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(26,1.383239e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(27,1.256195e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(28,1.139658e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(29,1.034026e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(30,9360521);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(31,1.829933e+07);
   VbbHcc_alljet_H_dR_stack_1->SetEntries(1.983153e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_alljet_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_alljet_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_alljet_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_H_dR_stack_1,"");
   
   TH1D *VbbHcc_alljet_H_dR_stack_2 = new TH1D("VbbHcc_alljet_H_dR_stack_2","",30,0,6);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(2,149.9185);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(3,138008.3);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(4,322408.9);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(5,469308.9);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(6,611189.3);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(7,729433.6);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(8,845365.4);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(9,996795);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(10,1214912);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(11,1527284);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(12,1961538);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(13,2537708);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(14,3247031);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(15,4024036);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(16,4352040);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(17,2327131);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(18,1401263);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(19,910001.2);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(20,607021.5);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(21,411296.3);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(22,282629);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(23,195936.3);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(24,136690);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(25,95953.76);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(26,67698.07);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(27,47773.89);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(28,33588.11);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(29,23466.95);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(30,16330.78);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(31,33305.34);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(2,3.019046);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(3,93.10747);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(4,142.6741);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(5,171.7473);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(6,195.3751);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(7,213.1127);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(8,229.5247);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(9,249.7967);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(10,276.8133);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(11,311.7212);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(12,354.8544);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(13,405.2955);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(14,460.1548);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(15,513.8358);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(16,535.3462);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(17,390.5148);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(18,302.0681);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(19,242.5703);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(20,197.3218);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(21,161.7103);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(22,133.459);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(23,110.6115);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(24,92.00871);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(25,76.80133);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(26,64.3151);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(27,53.87814);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(28,45.06473);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(29,37.62595);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(30,31.33972);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(31,44.46014);
   VbbHcc_alljet_H_dR_stack_2->SetEntries(5.003913e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_alljet_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_alljet_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_alljet_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_H_dR_stack_1","QCD","F");

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
   H_dR_alljet_16->Modified();
   H_dR_alljet_16->cd();
   H_dR_alljet_16->SetSelected(H_dR_alljet_16);
}
