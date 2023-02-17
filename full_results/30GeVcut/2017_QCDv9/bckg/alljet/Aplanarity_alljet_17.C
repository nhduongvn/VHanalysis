#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_alljet_17()
{
//=========Macro generated from canvas: Aplanarity_alljet_17/Aplanarity_alljet_17
//=========  (Tue Feb 14 16:10:13 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_alljet_17 = new TCanvas("Aplanarity_alljet_17", "Aplanarity_alljet_17",0,0,600,600);
   Aplanarity_alljet_17->SetHighLightColor(2);
   Aplanarity_alljet_17->Range(-0.2183529,-2.175172e+11,1.171633,1.595126e+12);
   Aplanarity_alljet_17->SetFillColor(0);
   Aplanarity_alljet_17->SetFillStyle(4000);
   Aplanarity_alljet_17->SetBorderMode(0);
   Aplanarity_alljet_17->SetBorderSize(2);
   Aplanarity_alljet_17->SetLeftMargin(0.15709);
   Aplanarity_alljet_17->SetRightMargin(0.1234783);
   Aplanarity_alljet_17->SetBottomMargin(0.12);
   Aplanarity_alljet_17->SetFrameFillStyle(1000);
   Aplanarity_alljet_17->SetFrameBorderMode(0);
   Aplanarity_alljet_17->SetFrameFillStyle(1000);
   Aplanarity_alljet_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.413862e+12);
   
   TH1F *st_stack_254 = new TH1F("st_stack_254","",50,0,1);
   st_stack_254->SetMinimum(0);
   st_stack_254->SetMaximum(1.413862e+12);
   st_stack_254->SetDirectory(0);
   st_stack_254->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_254->SetLineColor(ci);
   st_stack_254->GetXaxis()->SetTitle("Aplanarity");
   st_stack_254->GetXaxis()->SetRange(1,50);
   st_stack_254->GetXaxis()->SetLabelFont(42);
   st_stack_254->GetXaxis()->SetTitleOffset(1);
   st_stack_254->GetXaxis()->SetTitleFont(42);
   st_stack_254->GetYaxis()->SetTitle("Events/0.02");
   st_stack_254->GetYaxis()->SetLabelFont(42);
   st_stack_254->GetYaxis()->SetTitleSize(0.037);
   st_stack_254->GetYaxis()->SetTitleFont(42);
   st_stack_254->GetZaxis()->SetLabelFont(42);
   st_stack_254->GetZaxis()->SetTitleOffset(1);
   st_stack_254->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_254);
   
   
   TH1D *VbbHcc_alljet_Aplanarity_stack_1 = new TH1D("VbbHcc_alljet_Aplanarity_stack_1","",50,0,1);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(0,44877.73);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(1,9.425584e+11);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(2,7.269233e+10);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(3,2.637987e+10);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(4,1.272327e+10);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(5,7.024804e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(6,4.169554e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(7,2.610658e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(8,1.667419e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(9,1.096322e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(10,7.22526e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(11,4.737421e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(12,3.118913e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(13,2.076211e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(14,1.345839e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(15,8.338011e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(16,5.320697e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(17,3.209982e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(18,1.747847e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(19,9422275);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(20,4875077);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(21,2010180);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(22,739948.7);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(23,245956.7);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(24,24691.17);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(0,22462.44);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(1,1.261694e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(2,3.459855e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(3,2.077949e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(4,1.441263e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(5,1.070911e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(6,8252336);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(7,6534414);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(8,5222422);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(9,4240438);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(10,3440020);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(11,2787144);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(12,2261296);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(13,1847642);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(14,1486771);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(15,1172170);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(16,938203.7);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(17,727417.6);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(18,532978.5);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(19,393972);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(20,285040);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(21,181171);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(22,108199.5);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(23,64439.25);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(24,19665.29);
   VbbHcc_alljet_Aplanarity_stack_1->SetEntries(2.5692e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_alljet_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_alljet_Aplanarity_stack_2 = new TH1D("VbbHcc_alljet_Aplanarity_stack_2","",50,0,1);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(0,1.500217);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(1,1.600498e+07);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(2,6835913);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(3,4083602);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(4,2685340);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(5,1851909);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(6,1309673);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(7,940297.7);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(8,678964.7);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(9,491354.1);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(10,354424.3);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(11,253977.1);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(12,179882.3);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(13,125747.6);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(14,86016.88);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(15,57426.56);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(16,37236.52);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(17,23151.22);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(18,13655.36);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(19,7560.388);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(20,3825.395);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(21,1692.922);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(22,623.3726);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(23,164.4382);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(24,28.5818);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(25,1.030868);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(0,0.3146587);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(1,1017.803);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(2,678.992);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(3,527.8566);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(4,429.1587);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(5,356.9198);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(6,300.4274);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(7,254.7514);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(8,216.5608);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(9,184.3222);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(10,156.5936);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(11,132.6107);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(12,111.6023);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(13,93.35827);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(14,77.21561);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(15,63.10317);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(16,50.848);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(17,40.0796);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(18,30.78143);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(19,22.91964);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(20,16.29552);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(21,10.83947);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(22,6.564408);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(23,3.38509);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(24,1.429408);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(25,0.2595828);
   VbbHcc_alljet_Aplanarity_stack_2->SetEntries(6.067086e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_alljet_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_Aplanarity_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_Aplanarity_stack_1","QCD","F");

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
   Aplanarity_alljet_17->Modified();
   Aplanarity_alljet_17->cd();
   Aplanarity_alljet_17->SetSelected(Aplanarity_alljet_17);
}
