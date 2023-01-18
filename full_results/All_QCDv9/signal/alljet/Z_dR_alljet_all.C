#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_alljet_all()
{
//=========Macro generated from canvas: Z_dR_alljet_all/Z_dR_alljet_all
//=========  (Wed Jan 18 11:40:26 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_alljet_all = new TCanvas("Z_dR_alljet_all", "Z_dR_alljet_all",0,0,600,600);
   Z_dR_alljet_all->SetHighLightColor(2);
   Z_dR_alljet_all->Range(-1.310117,-50.09439,7.029799,367.3588);
   Z_dR_alljet_all->SetFillColor(0);
   Z_dR_alljet_all->SetFillStyle(4000);
   Z_dR_alljet_all->SetBorderMode(0);
   Z_dR_alljet_all->SetBorderSize(2);
   Z_dR_alljet_all->SetLeftMargin(0.15709);
   Z_dR_alljet_all->SetRightMargin(0.1234783);
   Z_dR_alljet_all->SetBottomMargin(0.12);
   Z_dR_alljet_all->SetFrameFillStyle(1000);
   Z_dR_alljet_all->SetFrameBorderMode(0);
   Z_dR_alljet_all->SetFrameFillStyle(1000);
   Z_dR_alljet_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(325.6135);
   
   TH1F *st_stack_212 = new TH1F("st_stack_212","",30,0,6);
   st_stack_212->SetMinimum(0);
   st_stack_212->SetMaximum(325.6135);
   st_stack_212->SetDirectory(0);
   st_stack_212->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_212->SetLineColor(ci);
   st_stack_212->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_212->GetXaxis()->SetRange(1,30);
   st_stack_212->GetXaxis()->SetLabelFont(42);
   st_stack_212->GetXaxis()->SetTitleOffset(1);
   st_stack_212->GetXaxis()->SetTitleFont(42);
   st_stack_212->GetYaxis()->SetTitle("Events/0.2");
   st_stack_212->GetYaxis()->SetLabelFont(42);
   st_stack_212->GetYaxis()->SetTitleSize(0.037);
   st_stack_212->GetYaxis()->SetTitleFont(42);
   st_stack_212->GetZaxis()->SetLabelFont(42);
   st_stack_212->GetZaxis()->SetTitleOffset(1);
   st_stack_212->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_212);
   
   
   TH1D *VbbHcc_alljet_Z_dR_all_stack_1 = new TH1D("VbbHcc_alljet_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(2,0.05219824);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(3,39.13839);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(4,75.92684);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(5,78.35598);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(6,89.71756);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(7,102.1818);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(8,114.3394);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(9,124.7426);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(10,135.2321);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(11,146.7853);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(12,156.0309);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(13,166.1749);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(14,178.9118);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(15,189.4307);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(16,186.3571);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(17,112.3698);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(18,76.79916);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(19,57.98544);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(20,45.59973);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(21,37.83876);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(22,31.6625);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(23,27.69444);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(24,23.82907);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(25,20.79576);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(26,18.2018);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(27,15.73902);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(28,14.20596);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(29,12.5432);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(30,10.75319);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(31,46.23577);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(2,0.01049397);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(3,0.2936233);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(4,0.4077811);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(5,0.4152733);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(6,0.4422048);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(7,0.4728502);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(8,0.4999616);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(9,0.5213854);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(10,0.5447985);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(11,0.5685692);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(12,0.5841499);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(13,0.6035861);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(14,0.6248434);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(15,0.6448391);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(16,0.6383326);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(17,0.4952526);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(18,0.4096883);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(19,0.3542736);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(20,0.3134646);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(21,0.2876535);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(22,0.2609613);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(23,0.2455573);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(24,0.2292244);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(25,0.2126674);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(26,0.2006614);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(27,0.1850008);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(28,0.1762879);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(29,0.1654369);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(30,0.1540649);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(31,0.3221999);
   VbbHcc_alljet_Z_dR_all_stack_1->SetEntries(1410242);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_alljet_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_alljet_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_alljet_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_alljet_Z_dR_all_stack_2 = new TH1D("VbbHcc_alljet_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(2,0.004009902);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(3,5.206573);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(4,9.701605);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(5,10.91313);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(6,13.05773);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(7,14.80032);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(8,16.18753);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(9,17.6837);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(10,19.05911);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(11,20.85209);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(12,22.4348);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(13,24.13024);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(14,25.70753);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(15,27.64501);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(16,27.54758);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(17,16.99919);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(18,12.05079);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(19,9.221964);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(20,7.243178);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(21,5.809115);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(22,4.778954);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(23,3.919581);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(24,3.140063);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(25,2.653823);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(26,2.180087);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(27,1.77151);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(28,1.441697);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(29,1.16197);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(30,0.912071);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(31,3.116547);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(2,0.00102969);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(3,0.03924408);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(4,0.0532419);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(5,0.05656448);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(6,0.06166188);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(7,0.06600434);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(8,0.06903338);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(9,0.0720473);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(10,0.07477807);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(11,0.07840956);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(12,0.08091172);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(13,0.08398557);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(14,0.08676888);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(15,0.08979691);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(16,0.08976622);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(17,0.07018281);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(18,0.0593118);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(19,0.05181787);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(20,0.04581936);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(21,0.04119934);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(22,0.03724616);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(23,0.03370881);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(24,0.02995215);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(25,0.02763892);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(26,0.02517454);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(27,0.02296391);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(28,0.02039749);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(29,0.01828747);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(30,0.016014);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(31,0.02989007);
   VbbHcc_alljet_Z_dR_all_stack_2->SetEntries(1377680);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_alljet_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_alljet_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_alljet_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_Z_dR_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_Z_dR_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_alljet_all->Modified();
   Z_dR_alljet_all->cd();
   Z_dR_alljet_all->SetSelected(Z_dR_alljet_all);
}
