#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_seljet_16_logY()
{
//=========Macro generated from canvas: Z_dR_seljet_16/Z_dR_seljet_16
//=========  (Thu Feb 16 10:37:22 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_seljet_16 = new TCanvas("Z_dR_seljet_16", "Z_dR_seljet_16",0,0,600,600);
   Z_dR_seljet_16->SetHighLightColor(2);
   Z_dR_seljet_16->Range(-1.310117,0.2907501,7.029799,3.593861);
   Z_dR_seljet_16->SetFillColor(0);
   Z_dR_seljet_16->SetFillStyle(4000);
   Z_dR_seljet_16->SetBorderMode(0);
   Z_dR_seljet_16->SetBorderSize(2);
   Z_dR_seljet_16->SetLogy();
   Z_dR_seljet_16->SetLeftMargin(0.15709);
   Z_dR_seljet_16->SetRightMargin(0.1234783);
   Z_dR_seljet_16->SetBottomMargin(0.12);
   Z_dR_seljet_16->SetFrameFillStyle(1000);
   Z_dR_seljet_16->SetFrameBorderMode(0);
   Z_dR_seljet_16->SetFrameFillStyle(1000);
   Z_dR_seljet_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1290.069);
   
   TH1F *st_stack_273 = new TH1F("st_stack_273","",30,0,6);
   st_stack_273->SetMinimum(4.865454);
   st_stack_273->SetMaximum(1834.637);
   st_stack_273->SetDirectory(0);
   st_stack_273->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_273->SetLineColor(ci);
   st_stack_273->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_273->GetXaxis()->SetRange(1,30);
   st_stack_273->GetXaxis()->SetLabelFont(42);
   st_stack_273->GetXaxis()->SetTitleOffset(1);
   st_stack_273->GetXaxis()->SetTitleFont(42);
   st_stack_273->GetYaxis()->SetTitle("Events/0.2");
   st_stack_273->GetYaxis()->SetLabelFont(42);
   st_stack_273->GetYaxis()->SetTitleSize(0.037);
   st_stack_273->GetYaxis()->SetTitleFont(42);
   st_stack_273->GetZaxis()->SetLabelFont(42);
   st_stack_273->GetZaxis()->SetTitleOffset(1);
   st_stack_273->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_273);
   
   
   TH1D *VbbHcc_seljet_Z_dR_stack_1 = new TH1D("VbbHcc_seljet_Z_dR_stack_1","",30,0,6);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(2,0.00287347);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(3,2.00025);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(4,2.931863);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(5,3.666219);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(6,4.313458);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(7,4.714643);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(8,5.023341);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(9,5.485505);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(10,5.853446);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(11,6.015251);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(12,6.948147);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(13,7.70916);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(14,8.734956);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(15,9.520114);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(16,9.154435);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(17,4.142626);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(18,2.024499);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(19,1.298206);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(20,0.7554335);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(21,0.4812062);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(22,0.3157113);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(23,0.1987026);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(24,0.1425755);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(25,0.08187952);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(26,0.05045944);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(27,0.01125661);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(2,0.00287347);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(3,0.07735259);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(4,0.09345796);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(5,0.1043843);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(6,0.1132172);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(7,0.1183375);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(8,0.1223907);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(9,0.1282867);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(10,0.1320116);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(11,0.1340439);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(12,0.1443071);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(13,0.1531552);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(14,0.1621603);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(15,0.1700912);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(16,0.1667);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(17,0.1115036);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(18,0.07747596);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(19,0.06175689);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(20,0.04725243);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(21,0.03724183);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(22,0.03008934);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(23,0.02372652);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(24,0.02031395);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(25,0.01537358);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(26,0.01201485);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(27,0.005629696);
   VbbHcc_seljet_Z_dR_stack_1->SetEntries(32424);

   ci = TColor::GetColor("#cc0000");
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
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(2,0.000381751);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(3,0.6327301);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(4,1.153471);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(5,1.463614);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(6,1.78655);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(7,1.890712);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(8,1.941812);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(9,2.054988);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(10,2.248448);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(11,2.463779);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(12,2.607559);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(13,2.916347);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(14,3.232868);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(15,3.380579);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(16,3.334044);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(17,1.642764);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(18,0.9271724);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(19,0.5683477);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(20,0.368211);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(21,0.2423563);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(22,0.1626648);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(23,0.09310395);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(24,0.06638305);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(25,0.02579127);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(26,0.01154266);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(27,0.003871043);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(28,0.001123854);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(29,0.0003573031);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(2,0.000381751);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(3,0.01550022);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(4,0.02099077);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(5,0.02364652);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(6,0.0261508);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(7,0.02689456);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(8,0.02727388);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(9,0.02802914);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(10,0.02933075);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(11,0.03071554);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(12,0.03157489);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(13,0.03341883);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(14,0.03521413);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(15,0.03601645);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(16,0.03574614);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(17,0.02509342);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(18,0.01880422);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(19,0.0146874);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(20,0.01182654);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(21,0.009565667);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(22,0.007829517);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(23,0.005908435);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(24,0.004993851);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(25,0.003122208);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(26,0.002048024);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(27,0.001176688);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(28,0.00064986);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(29,0.0003573031);
   VbbHcc_seljet_Z_dR_stack_2->SetEntries(93749);

   ci = TColor::GetColor("#00cc00");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Z_dR_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_seljet_16->Modified();
   Z_dR_seljet_16->cd();
   Z_dR_seljet_16->SetSelected(Z_dR_seljet_16);
}
