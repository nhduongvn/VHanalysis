#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_18_logY()
{
//=========Macro generated from canvas: H_dR_tags_18/H_dR_tags_18
//=========  (Thu Feb 16 10:37:38 2023) by ROOT version 6.26/06
   TCanvas *H_dR_tags_18 = new TCanvas("H_dR_tags_18", "H_dR_tags_18",0,0,600,600);
   H_dR_tags_18->SetHighLightColor(2);
   H_dR_tags_18->Range(-1.353788,-0.8956049,7.264125,9.445563);
   H_dR_tags_18->SetFillColor(0);
   H_dR_tags_18->SetFillStyle(4000);
   H_dR_tags_18->SetBorderMode(0);
   H_dR_tags_18->SetBorderSize(2);
   H_dR_tags_18->SetLogy();
   H_dR_tags_18->SetLeftMargin(0.15709);
   H_dR_tags_18->SetRightMargin(0.1234783);
   H_dR_tags_18->SetBottomMargin(0.12);
   H_dR_tags_18->SetFrameFillStyle(1000);
   H_dR_tags_18->SetFrameBorderMode(0);
   H_dR_tags_18->SetFrameFillStyle(1000);
   H_dR_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1.071877e+08);
   
   TH1F *st_stack_23 = new TH1F("st_stack_23","",30,0,6);
   st_stack_23->SetMinimum(2.214804);
   st_stack_23->SetMaximum(2.578968e+08);
   st_stack_23->SetDirectory(0);
   st_stack_23->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_23->SetLineColor(ci);
   st_stack_23->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_23->GetXaxis()->SetRange(1,31);
   st_stack_23->GetXaxis()->SetLabelFont(42);
   st_stack_23->GetXaxis()->SetTitleOffset(1);
   st_stack_23->GetXaxis()->SetTitleFont(42);
   st_stack_23->GetYaxis()->SetTitle("Events/0.2");
   st_stack_23->GetYaxis()->SetLabelFont(42);
   st_stack_23->GetYaxis()->SetTitleSize(0.037);
   st_stack_23->GetYaxis()->SetTitleFont(42);
   st_stack_23->GetZaxis()->SetLabelFont(42);
   st_stack_23->GetZaxis()->SetTitleOffset(1);
   st_stack_23->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_23);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(2,141.469);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,485526.3);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,519944.2);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,406321);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,330193.8);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,429042.9);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,365367.8);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,429273.6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,487878.6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,499041.5);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,510164.2);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,601838);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,853550.9);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,812804.4);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,921902.3);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,634878.4);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,454208.1);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,347261.7);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,260953.3);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,226282.8);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,147146);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,111133.5);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,75299.86);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,44407.95);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(26,32441.27);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(27,7853.886);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(28,1725.895);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(29,412.7539);
   VbbHcc_tags_H_dR_stack_1->SetBinError(2,63.30598);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,18343.7);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,20240.01);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,29286.55);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,15041.23);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,41814.55);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,19549.54);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,34063.06);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,43803.73);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,30761.72);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,17723.25);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,20589.38);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,68017.53);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,37192.46);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,58663.93);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,48808.53);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,37127.44);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,17665.93);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,26856.93);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,35945.95);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,10504.58);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,9356.177);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,7588.321);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,6521.52);
   VbbHcc_tags_H_dR_stack_1->SetBinError(26,6196.482);
   VbbHcc_tags_H_dR_stack_1->SetBinError(27,1791.278);
   VbbHcc_tags_H_dR_stack_1->SetBinError(28,646.566);
   VbbHcc_tags_H_dR_stack_1->SetBinError(29,394.0815);
   VbbHcc_tags_H_dR_stack_1->SetEntries(256755);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_2 = new TH1D("VbbHcc_tags_H_dR_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(2,35.70636);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,36917.03);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,65162.68);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,76624.76);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,82282.49);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,79507.2);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,74337.91);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,72771.97);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,76766.6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,85742.32);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,98185.31);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,113530.4);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,130391.2);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,147010.2);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,149975.1);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,85043.9);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,53120.18);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,34701.25);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,22943.58);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,15004.95);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,9668.023);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,6026.708);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,3547.476);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,1852.76);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,902.9542);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,364.5458);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(28,95.32573);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(29,6.606678);
   VbbHcc_tags_H_dR_stack_2->SetBinError(2,4.013685);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,58.83065);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,77.49053);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,83.60743);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,86.39151);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,85.28443);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,82.47156);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,82.05134);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,84.72827);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,88.99086);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,95.64438);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,102.2583);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,109.5626);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,117.0287);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,117.9019);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,88.9637);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,70.3939);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,56.15872);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,45.81005);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,36.31567);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,29.96915);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,23.39331);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,17.79187);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,12.37305);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,8.636098);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,5.645743);
   VbbHcc_tags_H_dR_stack_2->SetBinError(28,2.756694);
   VbbHcc_tags_H_dR_stack_2->SetBinError(29,0.7554284);
   VbbHcc_tags_H_dR_stack_2->SetEntries(2.03525e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_1","QCD","F");

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
   H_dR_tags_18->Modified();
   H_dR_tags_18->cd();
   H_dR_tags_18->SetSelected(H_dR_tags_18);
}
