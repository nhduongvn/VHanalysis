#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_18_logY()
{
//=========Macro generated from canvas: H_dR_both_18/H_dR_both_18
//=========  (Mon Dec 19 11:15:39 2022) by ROOT version 6.26/06
   TCanvas *H_dR_both_18 = new TCanvas("H_dR_both_18", "H_dR_both_18",0,0,600,600);
   H_dR_both_18->SetHighLightColor(2);
   H_dR_both_18->Range(-1.353788,-2.190977,7.264125,10.68553);
   H_dR_both_18->SetFillColor(0);
   H_dR_both_18->SetFillStyle(4000);
   H_dR_both_18->SetBorderMode(0);
   H_dR_both_18->SetBorderSize(2);
   H_dR_both_18->SetLogy();
   H_dR_both_18->SetLeftMargin(0.15709);
   H_dR_both_18->SetRightMargin(0.1234783);
   H_dR_both_18->SetBottomMargin(0.12);
   H_dR_both_18->SetFrameFillStyle(1000);
   H_dR_both_18->SetFrameBorderMode(0);
   H_dR_both_18->SetFrameFillStyle(1000);
   H_dR_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1.22809);
   st->SetMaximum(9.013747e+08);
   
   TH1F *st_stack_135 = new TH1F("st_stack_135","",30,0,6);
   st_stack_135->SetMinimum(0.2260495);
   st_stack_135->SetMaximum(2.499634e+09);
   st_stack_135->SetDirectory(0);
   st_stack_135->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_135->SetLineColor(ci);
   st_stack_135->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_135->GetXaxis()->SetRange(1,31);
   st_stack_135->GetXaxis()->SetLabelFont(42);
   st_stack_135->GetXaxis()->SetTitleOffset(1);
   st_stack_135->GetXaxis()->SetTitleFont(42);
   st_stack_135->GetYaxis()->SetTitle("Events/0.2");
   st_stack_135->GetYaxis()->SetLabelFont(42);
   st_stack_135->GetYaxis()->SetTitleSize(0.037);
   st_stack_135->GetYaxis()->SetTitleFont(42);
   st_stack_135->GetZaxis()->SetLabelFont(42);
   st_stack_135->GetZaxis()->SetTitleOffset(1);
   st_stack_135->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_135);
   
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(2,1143.778);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,3125019);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,4057247);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,3497305);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,3254683);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,3480238);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,3651479);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,3728032);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,4073184);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,4622860);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,5282841);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,5997627);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,6771595);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,7860096);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,8623239);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,5436534);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,3945256);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,3523913);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,2726947);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,1729739);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,1569659);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,1041236);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,661248.6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,521504.3);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,329128.8);
   VbbHcc_both_H_dR_stack_1->SetBinContent(27,160809.6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(28,18840.35);
   VbbHcc_both_H_dR_stack_1->SetBinContent(29,1605.856);
   VbbHcc_both_H_dR_stack_1->SetBinError(2,652.7609);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,128136.6);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,199319);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,168980.3);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,176030.7);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,180051);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,174518.6);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,184704.1);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,182416);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,211927.4);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,232173.3);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,249981.8);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,255270.6);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,281839.9);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,305162.4);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,230398.3);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,189039.7);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,221172.8);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,172559.3);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,122572.3);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,131218.5);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,95135.67);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,79638.2);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,81168.46);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,92865.8);
   VbbHcc_both_H_dR_stack_1->SetBinError(27,54262.03);
   VbbHcc_both_H_dR_stack_1->SetBinError(28,4449.291);
   VbbHcc_both_H_dR_stack_1->SetBinError(29,711.431);
   VbbHcc_both_H_dR_stack_1->SetEntries(600060);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_stack_2 = new TH1D("VbbHcc_both_H_dR_stack_2","",30,0,6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(2,84.31244);
   VbbHcc_both_H_dR_stack_2->SetBinContent(3,94776.86);
   VbbHcc_both_H_dR_stack_2->SetBinContent(4,168389.2);
   VbbHcc_both_H_dR_stack_2->SetBinContent(5,204843.9);
   VbbHcc_both_H_dR_stack_2->SetBinContent(6,245917.5);
   VbbHcc_both_H_dR_stack_2->SetBinContent(7,268600.2);
   VbbHcc_both_H_dR_stack_2->SetBinContent(8,276868.9);
   VbbHcc_both_H_dR_stack_2->SetBinContent(9,279715);
   VbbHcc_both_H_dR_stack_2->SetBinContent(10,285775.5);
   VbbHcc_both_H_dR_stack_2->SetBinContent(11,297806.5);
   VbbHcc_both_H_dR_stack_2->SetBinContent(12,317057.5);
   VbbHcc_both_H_dR_stack_2->SetBinContent(13,341341.6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(14,368359.7);
   VbbHcc_both_H_dR_stack_2->SetBinContent(15,394820.5);
   VbbHcc_both_H_dR_stack_2->SetBinContent(16,390508.2);
   VbbHcc_both_H_dR_stack_2->SetBinContent(17,223659.3);
   VbbHcc_both_H_dR_stack_2->SetBinContent(18,143168.1);
   VbbHcc_both_H_dR_stack_2->SetBinContent(19,96319.41);
   VbbHcc_both_H_dR_stack_2->SetBinContent(20,65409.51);
   VbbHcc_both_H_dR_stack_2->SetBinContent(21,44048.2);
   VbbHcc_both_H_dR_stack_2->SetBinContent(22,28982.09);
   VbbHcc_both_H_dR_stack_2->SetBinContent(23,18470.08);
   VbbHcc_both_H_dR_stack_2->SetBinContent(24,11094.86);
   VbbHcc_both_H_dR_stack_2->SetBinContent(25,5961.541);
   VbbHcc_both_H_dR_stack_2->SetBinContent(26,2941.873);
   VbbHcc_both_H_dR_stack_2->SetBinContent(27,1224.61);
   VbbHcc_both_H_dR_stack_2->SetBinContent(28,329.2954);
   VbbHcc_both_H_dR_stack_2->SetBinContent(29,24.47411);
   VbbHcc_both_H_dR_stack_2->SetBinError(2,4.562346);
   VbbHcc_both_H_dR_stack_2->SetBinError(3,95.95115);
   VbbHcc_both_H_dR_stack_2->SetBinError(4,126.1753);
   VbbHcc_both_H_dR_stack_2->SetBinError(5,139.7039);
   VbbHcc_both_H_dR_stack_2->SetBinError(6,152.3726);
   VbbHcc_both_H_dR_stack_2->SetBinError(7,158.8883);
   VbbHcc_both_H_dR_stack_2->SetBinError(8,162.7065);
   VbbHcc_both_H_dR_stack_2->SetBinError(9,162.9245);
   VbbHcc_both_H_dR_stack_2->SetBinError(10,165.4086);
   VbbHcc_both_H_dR_stack_2->SetBinError(11,168.6362);
   VbbHcc_both_H_dR_stack_2->SetBinError(12,173.7154);
   VbbHcc_both_H_dR_stack_2->SetBinError(13,180.6655);
   VbbHcc_both_H_dR_stack_2->SetBinError(14,187.8737);
   VbbHcc_both_H_dR_stack_2->SetBinError(15,194.716);
   VbbHcc_both_H_dR_stack_2->SetBinError(16,193.3086);
   VbbHcc_both_H_dR_stack_2->SetBinError(17,146.611);
   VbbHcc_both_H_dR_stack_2->SetBinError(18,117.4076);
   VbbHcc_both_H_dR_stack_2->SetBinError(19,95.41572);
   VbbHcc_both_H_dR_stack_2->SetBinError(20,78.19757);
   VbbHcc_both_H_dR_stack_2->SetBinError(21,63.4838);
   VbbHcc_both_H_dR_stack_2->SetBinError(22,51.99357);
   VbbHcc_both_H_dR_stack_2->SetBinError(23,41.07965);
   VbbHcc_both_H_dR_stack_2->SetBinError(24,31.91313);
   VbbHcc_both_H_dR_stack_2->SetBinError(25,22.72186);
   VbbHcc_both_H_dR_stack_2->SetBinError(26,16.61915);
   VbbHcc_both_H_dR_stack_2->SetBinError(27,10.27493);
   VbbHcc_both_H_dR_stack_2->SetBinError(28,5.797625);
   VbbHcc_both_H_dR_stack_2->SetBinError(29,1.414472);
   VbbHcc_both_H_dR_stack_2->SetEntries(5.975773e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_1","QCD","F");

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
   H_dR_both_18->Modified();
   H_dR_both_18->cd();
   H_dR_both_18->SetSelected(H_dR_both_18);
}
