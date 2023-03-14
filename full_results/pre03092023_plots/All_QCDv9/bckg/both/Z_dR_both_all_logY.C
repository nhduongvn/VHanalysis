#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_all_logY()
{
//=========Macro generated from canvas: Z_dR_both_all/Z_dR_both_all
//=========  (Thu Feb 16 10:37:40 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_both_all = new TCanvas("Z_dR_both_all", "Z_dR_both_all",0,0,600,600);
   Z_dR_both_all->SetHighLightColor(2);
   Z_dR_both_all->Range(-1.310117,-0.9635967,7.029799,9.818945);
   Z_dR_both_all->SetFillColor(0);
   Z_dR_both_all->SetFillStyle(4000);
   Z_dR_both_all->SetBorderMode(0);
   Z_dR_both_all->SetBorderSize(2);
   Z_dR_both_all->SetLogy();
   Z_dR_both_all->SetLeftMargin(0.15709);
   Z_dR_both_all->SetRightMargin(0.1234783);
   Z_dR_both_all->SetBottomMargin(0.12);
   Z_dR_both_all->SetFrameFillStyle(1000);
   Z_dR_both_all->SetFrameBorderMode(0);
   Z_dR_both_all->SetFrameFillStyle(1000);
   Z_dR_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(2.228755e+08);
   
   TH1F *st_stack_148 = new TH1F("st_stack_148","",30,0,6);
   st_stack_148->SetMinimum(2.139481);
   st_stack_148->SetMaximum(5.504161e+08);
   st_stack_148->SetDirectory(0);
   st_stack_148->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_148->SetLineColor(ci);
   st_stack_148->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_148->GetXaxis()->SetRange(1,30);
   st_stack_148->GetXaxis()->SetLabelFont(42);
   st_stack_148->GetXaxis()->SetTitleOffset(1);
   st_stack_148->GetXaxis()->SetTitleFont(42);
   st_stack_148->GetYaxis()->SetTitle("Events/0.2");
   st_stack_148->GetYaxis()->SetLabelFont(42);
   st_stack_148->GetYaxis()->SetTitleSize(0.037);
   st_stack_148->GetYaxis()->SetTitleFont(42);
   st_stack_148->GetZaxis()->SetLabelFont(42);
   st_stack_148->GetZaxis()->SetTitleOffset(1);
   st_stack_148->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_148);
   
   
   TH1D *VbbHcc_both_Z_dR_all_stack_1 = new TH1D("VbbHcc_both_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(2,2111.896);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(3,2111567);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(4,2141968);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(5,1562634);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(6,1460785);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(7,1295015);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(8,1061941);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(9,1059371);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(10,1181666);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(11,1139628);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(12,1138833);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(13,1307583);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(14,1478502);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(15,1700333);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(16,1793082);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(17,947902.4);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(18,657969.3);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(19,460085.3);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(20,327529.9);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(21,198709.2);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(22,125854.5);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(23,80113.98);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(24,57109.57);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(25,19542.88);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(26,11891.61);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(27,5049.317);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(28,610.9192);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(29,1630.94);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(2,656.1242);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(3,46251.61);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(4,36976.11);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(5,37733.68);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(6,53564.53);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(7,47669.47);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(8,33821.14);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(9,34259.95);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(10,57979.83);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(11,51229.21);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(12,46697.27);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(13,61212.19);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(14,66558.27);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(15,68131.07);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(16,69957.71);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(17,35003.3);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(18,45692.83);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(19,37673.84);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(20,39999.29);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(21,12026.43);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(22,10214.87);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(23,6372.614);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(24,7299.044);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(25,3005.356);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(26,3843.148);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(27,2027.348);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(28,353.1497);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(29,1621.689);
   VbbHcc_both_Z_dR_all_stack_1->SetEntries(784962);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_2 = new TH1D("VbbHcc_both_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(2,37.19517);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(3,45224.62);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(4,86786.73);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(5,105777.9);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(6,127034.3);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(7,145944.9);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(8,163939.9);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(9,184384);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(10,208147.1);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(11,237966.1);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(12,272885.5);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(13,312650);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(14,353160.6);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(15,390671.6);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(16,389478.8);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(17,199521.1);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(18,110150.8);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(19,63262.52);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(20,36096.91);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(21,20153.57);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(22,10965.22);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(23,5690.686);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(24,2830.892);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(25,1299.516);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(26,519.5317);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(27,175.9883);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(28,41.43076);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(29,1.82822);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(2,1.69277);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(3,60.84881);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(4,84.25723);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(5,93.13024);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(6,102.6225);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(7,109.3261);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(8,116.0865);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(9,123.0678);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(10,130.2955);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(11,139.7709);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(12,149.7523);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(13,160.6338);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(14,171.142);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(15,180.0455);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(16,179.8074);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(17,129.1199);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(18,96.06179);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(19,73.01857);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(20,54.85623);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(21,41.53574);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(22,30.06025);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(23,21.56666);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(24,15.01887);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(25,10.24065);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(26,7.264577);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(27,3.764604);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(28,3.065504);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(29,0.3668163);
   VbbHcc_both_Z_dR_all_stack_2->SetEntries(4.860908e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_1","QCD","F");

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
   Z_dR_both_all->Modified();
   Z_dR_both_all->cd();
   Z_dR_both_all->SetSelected(Z_dR_both_all);
}
