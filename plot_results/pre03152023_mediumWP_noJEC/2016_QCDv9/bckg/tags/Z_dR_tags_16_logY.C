#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_16_logY()
{
//=========Macro generated from canvas: Z_dR_tags_16/Z_dR_tags_16
//=========  (Thu Mar  9 13:18:01 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_tags_16 = new TCanvas("Z_dR_tags_16", "Z_dR_tags_16",0,0,600,600);
   Z_dR_tags_16->SetHighLightColor(2);
   Z_dR_tags_16->Range(-1.310117,-0.3977162,7.029799,6.81855);
   Z_dR_tags_16->SetFillColor(0);
   Z_dR_tags_16->SetFillStyle(4000);
   Z_dR_tags_16->SetBorderMode(0);
   Z_dR_tags_16->SetBorderSize(2);
   Z_dR_tags_16->SetLogy();
   Z_dR_tags_16->SetLeftMargin(0.15709);
   Z_dR_tags_16->SetRightMargin(0.1234783);
   Z_dR_tags_16->SetBottomMargin(0.12);
   Z_dR_tags_16->SetFrameFillStyle(1000);
   Z_dR_tags_16->SetFrameBorderMode(0);
   Z_dR_tags_16->SetFrameFillStyle(1000);
   Z_dR_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(637484);
   
   TH1F *st_stack_17 = new TH1F("st_stack_17","",30,0,6);
   st_stack_17->SetMinimum(2.939245);
   st_stack_17->SetMaximum(1250039);
   st_stack_17->SetDirectory(0);
   st_stack_17->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_17->SetLineColor(ci);
   st_stack_17->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_17->GetXaxis()->SetRange(1,30);
   st_stack_17->GetXaxis()->SetLabelFont(42);
   st_stack_17->GetXaxis()->SetTitleOffset(1);
   st_stack_17->GetXaxis()->SetTitleFont(42);
   st_stack_17->GetYaxis()->SetTitle("Event/0.2");
   st_stack_17->GetYaxis()->SetLabelFont(42);
   st_stack_17->GetYaxis()->SetTitleSize(0.037);
   st_stack_17->GetYaxis()->SetTitleFont(42);
   st_stack_17->GetZaxis()->SetLabelFont(42);
   st_stack_17->GetZaxis()->SetTitleOffset(1);
   st_stack_17->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_17);
   
   
   TH1D *VbbHcc_tags_Z_dR_stack_1 = new TH1D("VbbHcc_tags_Z_dR_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(2,182.764);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,496687.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,510263.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,415475.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,331240.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,299426.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,233466);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,286211.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,243613.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,243151.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,249741.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,283310.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,343159.7);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,390278.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,411246.5);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,216796.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,134280.7);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,82330.61);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,81975.93);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,42466.72);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,23925.77);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(23,18316.17);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(24,11593.23);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(25,4892.837);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(26,2927.192);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(27,789.5613);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(28,41.41082);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(29,0.3520729);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(2,56.18427);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,12360.5);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,14692.33);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,26114.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,12567.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,12414.96);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,8679.592);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,24493.26);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,10372.46);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,10730.3);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,10594.85);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,11502.84);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,26604.72);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,32995.13);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,30884.52);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,10521.75);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,8473.521);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,5431.786);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,20222.24);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,4466.743);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,3160.79);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(23,2740.781);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(24,2654.612);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(25,1677.467);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(26,1560.366);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(27,383.1534);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(28,27.91007);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(29,0.3520729);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(247451);

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
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(2,10.0329);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,9883.83);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,18848.65);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,23124.65);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,27732.71);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,31923.72);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,35767.65);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,40163.32);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,45487.1);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,52116.56);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,60049.57);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,68937.49);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,78170.24);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,86596.14);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,86440.08);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,44042.1);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,24232.35);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,13777.01);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,7811.018);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,4312.705);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,2331.143);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,1202.482);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,591.6657);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,261.3324);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(26,103.2187);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(27,37.02199);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(28,7.633387);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(29,0.30027);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(2,0.8266297);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,26.04655);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,36.03267);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,39.95364);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,43.76955);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,46.94172);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,49.68262);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,52.65676);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,56.05068);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,60.04631);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,64.53422);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,69.22942);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,73.83079);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,77.83355);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,77.86598);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,55.63066);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,41.30024);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,31.15019);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,23.43802);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,17.40728);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,12.74891);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,9.139516);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,6.378805);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,4.238236);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(26,2.650183);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(27,1.540982);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(28,0.7133746);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(29,0.1371425);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(1.175949e+07);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_tags_16->Modified();
   Z_dR_tags_16->cd();
   Z_dR_tags_16->SetSelected(Z_dR_tags_16);
}
