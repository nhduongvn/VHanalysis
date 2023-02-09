#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_18()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_18/Z_dR_Bj0_algo_18
//=========  (Wed Jan 18 11:43:12 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_18 = new TCanvas("Z_dR_Bj0_algo_18", "Z_dR_Bj0_algo_18",0,0,600,600);
   Z_dR_Bj0_algo_18->SetHighLightColor(2);
   Z_dR_Bj0_algo_18->Range(-1.310117,-677584.4,7.029799,4968952);
   Z_dR_Bj0_algo_18->SetFillColor(0);
   Z_dR_Bj0_algo_18->SetFillStyle(4000);
   Z_dR_Bj0_algo_18->SetBorderMode(0);
   Z_dR_Bj0_algo_18->SetBorderSize(2);
   Z_dR_Bj0_algo_18->SetLeftMargin(0.15709);
   Z_dR_Bj0_algo_18->SetRightMargin(0.1234783);
   Z_dR_Bj0_algo_18->SetBottomMargin(0.12);
   Z_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_18->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(4404299);
   
   TH1F *st_stack_115 = new TH1F("st_stack_115","",30,0,6);
   st_stack_115->SetMinimum(0);
   st_stack_115->SetMaximum(4404299);
   st_stack_115->SetDirectory(0);
   st_stack_115->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_115->SetLineColor(ci);
   st_stack_115->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_115->GetXaxis()->SetRange(1,30);
   st_stack_115->GetXaxis()->SetLabelFont(42);
   st_stack_115->GetXaxis()->SetTitleOffset(1);
   st_stack_115->GetXaxis()->SetTitleFont(42);
   st_stack_115->GetYaxis()->SetTitle("Events/0.2");
   st_stack_115->GetYaxis()->SetLabelFont(42);
   st_stack_115->GetYaxis()->SetTitleSize(0.037);
   st_stack_115->GetYaxis()->SetTitleFont(42);
   st_stack_115->GetZaxis()->SetLabelFont(42);
   st_stack_115->GetZaxis()->SetTitleOffset(1);
   st_stack_115->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_115);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,608758.5);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,2905219);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,2176674);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,1471616);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,1061289);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,548821.2);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,471321);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,180333.3);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(9,314627.9);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,217663.2);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(11,158460);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(12,84765.28);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(13,35682.98);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(14,59318.19);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(15,16352.6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(16,9307.706);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(17,27413.05);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(18,2833.796);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(19,2303.234);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(20,2070.867);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(21,1908.494);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(22,81.60755);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(23,48.13303);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(24,438.6633);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(25,2639.106);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(26,1876.019);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,42620.18);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,144025.4);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,139840.5);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,119540.9);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,111394.6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,65391.98);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,71173.71);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,39518.17);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(9,69528.53);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,54252.59);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(11,49154.67);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(12,31617.98);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(13,22011.58);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(14,30972.52);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(15,5075.348);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(16,3826.959);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(17,21818.65);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(18,1950.585);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(19,1913.227);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(20,1877.705);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(21,1876.3);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(22,48.53239);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(23,36.05258);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(24,376.5254);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(25,1949.107);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(26,1876.019);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(38074);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,4335.101);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,30980.17);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,42539);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,35181.04);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,23678.16);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,14725.56);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,9087.986);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,5745.981);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,3766.082);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,2529.082);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,1713.065);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,1158.56);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(13,811.7678);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(14,553.2236);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(15,380.7311);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(16,258.3525);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(17,183.9495);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(18,122.1192);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(19,87.85183);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(20,63.74885);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(21,39.7006);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(22,27.91761);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(23,17.66207);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(24,11.61098);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(25,8.834542);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(26,4.902522);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(27,4.517387);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(28,2.926521);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(29,1.65264);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(30,1.117419);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(31,3.280047);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,17.55448);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,47.04755);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,55.22626);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,50.23194);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,41.19863);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,32.44159);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,25.45428);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,20.20078);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,16.33345);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,13.3712);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,10.99412);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,9.022848);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(13,7.555403);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(14,6.23466);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(15,5.171822);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(16,4.256565);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(17,3.603508);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(18,2.91721);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(19,2.479634);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(20,2.109932);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(21,1.660219);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(22,1.412437);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(23,1.106753);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(24,0.9081197);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(25,0.7817075);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(26,0.5875421);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(27,0.5526404);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(28,0.4600826);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(29,0.3364462);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(30,0.2744821);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(31,0.4821889);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(2572457);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_1","QCD","F");

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
   Z_dR_Bj0_algo_18->Modified();
   Z_dR_Bj0_algo_18->cd();
   Z_dR_Bj0_algo_18->SetSelected(Z_dR_Bj0_algo_18);
}
