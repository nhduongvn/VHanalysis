#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_seljet_all_logY()
{
//=========Macro generated from canvas: Z_dR_seljet_all/Z_dR_seljet_all
//=========  (Wed Jan 18 11:42:56 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_seljet_all = new TCanvas("Z_dR_seljet_all", "Z_dR_seljet_all",0,0,600,600);
   Z_dR_seljet_all->SetHighLightColor(2);
   Z_dR_seljet_all->Range(-1.310117,0.7107491,7.029799,13.50892);
   Z_dR_seljet_all->SetFillColor(0);
   Z_dR_seljet_all->SetFillStyle(4000);
   Z_dR_seljet_all->SetBorderMode(0);
   Z_dR_seljet_all->SetBorderSize(2);
   Z_dR_seljet_all->SetLogy();
   Z_dR_seljet_all->SetLeftMargin(0.15709);
   Z_dR_seljet_all->SetRightMargin(0.1234783);
   Z_dR_seljet_all->SetBottomMargin(0.12);
   Z_dR_seljet_all->SetFrameFillStyle(1000);
   Z_dR_seljet_all->SetFrameBorderMode(0);
   Z_dR_seljet_all->SetFrameFillStyle(1000);
   Z_dR_seljet_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(953.3898);
   st->SetMaximum(6.136462e+11);
   
   TH1F *st_stack_276 = new TH1F("st_stack_276","",30,0,6);
   st_stack_276->SetMinimum(176.4124);
   st_stack_276->SetMaximum(1.694725e+12);
   st_stack_276->SetDirectory(0);
   st_stack_276->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_276->SetLineColor(ci);
   st_stack_276->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_276->GetXaxis()->SetRange(1,30);
   st_stack_276->GetXaxis()->SetLabelFont(42);
   st_stack_276->GetXaxis()->SetTitleOffset(1);
   st_stack_276->GetXaxis()->SetTitleFont(42);
   st_stack_276->GetYaxis()->SetTitle("Events/0.2");
   st_stack_276->GetYaxis()->SetLabelFont(42);
   st_stack_276->GetYaxis()->SetTitleSize(0.037);
   st_stack_276->GetYaxis()->SetTitleFont(42);
   st_stack_276->GetZaxis()->SetLabelFont(42);
   st_stack_276->GetZaxis()->SetTitleOffset(1);
   st_stack_276->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_276);
   
   
   TH1D *VbbHcc_seljet_Z_dR_all_stack_1 = new TH1D("VbbHcc_seljet_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(2,2232208);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(3,1.76202e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(4,3.254892e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(5,2.736431e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(6,2.720551e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(7,2.842578e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(8,2.975248e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(9,3.204401e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(10,3.478876e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(11,3.819885e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(12,4.245316e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(13,4.736346e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(14,5.282384e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(15,5.857349e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(16,6.130476e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(17,4.004356e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(18,2.882212e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(19,2.161716e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(20,1.632152e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(21,1.206312e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(22,8.744329e+08);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(23,6.023318e+08);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(24,3.913713e+08);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(25,2.306114e+08);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(26,1.20023e+08);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(27,5.446299e+07);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(28,1.582468e+07);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(29,953170.2);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(2,128147.9);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(3,3415223);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(4,5020188);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(5,4819983);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(6,4735040);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(7,4992696);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(8,5064020);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(9,5281681);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(10,5541105);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(11,5960496);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(12,6139820);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(13,6676784);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(14,7142409);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(15,7559534);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(16,7789309);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(17,6425976);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(18,5374971);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(19,4880080);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(20,4095139);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(21,3517512);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(22,2997424);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(23,2488859);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(24,2028663);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(25,1604294);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(26,1138384);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(27,775956.8);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(28,417743.9);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(29,98557.82);
   VbbHcc_seljet_Z_dR_all_stack_1->SetEntries(2.021266e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_seljet_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_seljet_Z_dR_all_stack_2 = new TH1D("VbbHcc_seljet_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(2,1376.164);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(3,1267142);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(4,2495488);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(5,3036441);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(6,3726104);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(7,4314349);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(8,4756836);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(9,5066647);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(10,5279974);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(11,5459210);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(12,5643271);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(13,5839615);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(14,6044299);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(15,6242827);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(16,5986739);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(17,3247422);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(18,1990232);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(19,1303469);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(20,867145.9);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(21,573382);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(22,370713.7);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(23,231180.8);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(24,135420.5);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(25,71645.59);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(26,34101.72);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(27,13632.65);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(28,3562.452);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(29,219.6193);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(2,10.79709);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(3,323.8951);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(4,455.4203);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(5,504.404);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(6,559.5373);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(7,601.7476);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(8,631.6389);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(9,651.4329);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(10,665.5828);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(11,677.4068);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(12,689.1941);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(13,701.877);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(14,715.1863);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(15,727.7531);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(16,713.2125);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(17,524.4444);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(18,409.0454);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(19,329.9788);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(20,268.3264);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(21,217.8892);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(22,174.3243);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(23,137.4184);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(24,104.6628);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(25,75.52826);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(26,52.14936);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(27,32.68927);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(28,16.83218);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(29,4.83518);
   VbbHcc_seljet_Z_dR_all_stack_2->SetEntries(1.046864e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_seljet_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Z_dR_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Z_dR_all_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_seljet_all->Modified();
   Z_dR_seljet_all->cd();
   Z_dR_seljet_all->SetSelected(Z_dR_seljet_all);
}
