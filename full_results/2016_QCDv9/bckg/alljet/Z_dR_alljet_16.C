#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_alljet_16()
{
//=========Macro generated from canvas: Z_dR_alljet_16/Z_dR_alljet_16
//=========  (Wed Jan 18 11:43:13 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_alljet_16 = new TCanvas("Z_dR_alljet_16", "Z_dR_alljet_16",0,0,600,600);
   Z_dR_alljet_16->SetHighLightColor(2);
   Z_dR_alljet_16->Range(-1.310117,-1.09883e+10,7.029799,8.058087e+10);
   Z_dR_alljet_16->SetFillColor(0);
   Z_dR_alljet_16->SetFillStyle(4000);
   Z_dR_alljet_16->SetBorderMode(0);
   Z_dR_alljet_16->SetBorderSize(2);
   Z_dR_alljet_16->SetLeftMargin(0.15709);
   Z_dR_alljet_16->SetRightMargin(0.1234783);
   Z_dR_alljet_16->SetBottomMargin(0.12);
   Z_dR_alljet_16->SetFrameFillStyle(1000);
   Z_dR_alljet_16->SetFrameBorderMode(0);
   Z_dR_alljet_16->SetFrameFillStyle(1000);
   Z_dR_alljet_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(7.142395e+10);
   
   TH1F *st_stack_209 = new TH1F("st_stack_209","",30,0,6);
   st_stack_209->SetMinimum(0);
   st_stack_209->SetMaximum(7.142395e+10);
   st_stack_209->SetDirectory(0);
   st_stack_209->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_209->SetLineColor(ci);
   st_stack_209->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_209->GetXaxis()->SetRange(1,30);
   st_stack_209->GetXaxis()->SetLabelFont(42);
   st_stack_209->GetXaxis()->SetTitleOffset(1);
   st_stack_209->GetXaxis()->SetTitleFont(42);
   st_stack_209->GetYaxis()->SetTitle("Events/0.2");
   st_stack_209->GetYaxis()->SetLabelFont(42);
   st_stack_209->GetYaxis()->SetTitleSize(0.037);
   st_stack_209->GetYaxis()->SetTitleFont(42);
   st_stack_209->GetZaxis()->SetLabelFont(42);
   st_stack_209->GetZaxis()->SetTitleOffset(1);
   st_stack_209->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_209);
   
   
   TH1D *VbbHcc_alljet_Z_dR_stack_1 = new TH1D("VbbHcc_alljet_Z_dR_stack_1","",30,0,6);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(2,2.499108e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(3,1.030772e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(4,2.229189e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(5,1.839757e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(6,1.962244e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(7,2.153704e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(8,2.35405e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(9,2.583953e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(10,2.834991e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(11,3.111214e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(12,3.42161e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(13,3.754495e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(14,4.124774e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(15,4.524041e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(16,4.761362e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(17,3.730779e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(18,3.179295e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(19,2.819537e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(20,2.544555e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(21,2.311852e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(22,2.110801e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(23,1.925341e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(24,1.760524e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(25,1.60762e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(26,1.475695e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(27,1.347437e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(28,1.229488e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(29,1.126111e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(30,1.025788e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(31,6.162857e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(2,630913.9);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(3,1.252658e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(4,1.8654e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(5,1.696834e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(6,1.755659e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(7,1.84235e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(8,1.928607e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(9,2.022313e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(10,2.119382e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(11,2.22082e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(12,2.329726e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(13,2.440796e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(14,2.559225e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(15,2.681586e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(16,2.752846e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(17,2.439974e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(18,2.255052e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(19,2.126427e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(20,2.022847e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(21,1.930814e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(22,1.847077e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(23,1.76616e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(24,1.690929e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(25,1.617687e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(26,1.551853e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(27,1.484474e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(28,1.419681e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(29,1.360066e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(30,1.299383e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(31,3.19924e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetEntries(1.983153e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_alljet_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_alljet_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_alljet_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_alljet_Z_dR_stack_2 = new TH1D("VbbHcc_alljet_Z_dR_stack_2","",30,0,6);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(2,576.8061);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(3,422830.7);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(4,833170.7);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(5,1014230);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(6,1253375);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(7,1466335);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(8,1641174);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(9,1782151);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(10,1898302);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(11,2002179);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(12,2104709);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(13,2206406);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(14,2307791);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(15,2404063);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(16,2347074);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(17,1438014);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(18,994290.6);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(19,737003.8);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(20,564231.5);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(21,441202.2);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(22,349110.9);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(23,278650.3);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(24,223751.4);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(25,179828.7);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(26,144799.7);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(27,116129.1);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(28,93009.42);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(29,73980.87);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(30,58439.22);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(31,190484.2);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(2,5.995342);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(3,164.4329);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(4,231.7005);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(5,256.7718);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(6,285.85);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(7,309.1887);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(8,326.8829);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(9,340.3105);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(10,350.9392);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(11,360.3151);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(12,369.5567);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(13,378.666);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(14,387.685);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(15,396.1425);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(16,391.5391);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(17,304.8501);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(18,252.1983);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(19,216.0854);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(20,188.2214);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(21,165.7292);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(22,146.7919);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(23,130.6438);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(24,116.6081);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(25,104.1724);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(26,93.16441);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(27,83.19188);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(28,74.21774);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(29,65.9582);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(30,58.45405);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(31,104.262);
   VbbHcc_alljet_Z_dR_stack_2->SetEntries(5.003913e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_alljet_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_alljet_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_alljet_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_Z_dR_stack_1","QCD","F");

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
   Z_dR_alljet_16->Modified();
   Z_dR_alljet_16->cd();
   Z_dR_alljet_16->SetSelected(Z_dR_alljet_16);
}
