#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_18_logY()
{
//=========Macro generated from canvas: H_dR_both_18/H_dR_both_18
//=========  (Thu Mar  9 13:18:03 2023) by ROOT version 6.26/06
   TCanvas *H_dR_both_18 = new TCanvas("H_dR_both_18", "H_dR_both_18",0,0,600,600);
   H_dR_both_18->SetHighLightColor(2);
   H_dR_both_18->Range(-1.353788,-0.469077,7.264125,7.182249);
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
   st->SetMinimum(10);
   st->SetMaximum(1292054);
   
   TH1F *st_stack_151 = new TH1F("st_stack_151","",30,0,6);
   st_stack_151->SetMinimum(2.812433);
   st_stack_151->SetMaximum(2612863);
   st_stack_151->SetDirectory(0);
   st_stack_151->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_151->SetLineColor(ci);
   st_stack_151->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_151->GetXaxis()->SetRange(1,31);
   st_stack_151->GetXaxis()->SetLabelFont(42);
   st_stack_151->GetXaxis()->SetTitleOffset(1);
   st_stack_151->GetXaxis()->SetTitleFont(42);
   st_stack_151->GetYaxis()->SetTitle("Event/0.2");
   st_stack_151->GetYaxis()->SetLabelFont(42);
   st_stack_151->GetYaxis()->SetTitleSize(0.037);
   st_stack_151->GetYaxis()->SetTitleFont(42);
   st_stack_151->GetZaxis()->SetLabelFont(42);
   st_stack_151->GetZaxis()->SetTitleOffset(1);
   st_stack_151->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_151);
   
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(2,144.4095);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,487399.4);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,523443.4);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,412772.3);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,347320.2);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,438070.6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,383373.4);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,440869.5);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,505259);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,505528.4);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,522828.6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,622110.5);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,865089.8);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,855026.7);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,919182.6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,649198.7);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,458971.8);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,357050.6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,257837.3);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,229756.5);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,146286.9);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,115600.4);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,74796.65);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,47360.92);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,29818.41);
   VbbHcc_both_H_dR_stack_1->SetBinContent(27,7426.859);
   VbbHcc_both_H_dR_stack_1->SetBinContent(28,1740.311);
   VbbHcc_both_H_dR_stack_1->SetBinContent(29,384.4997);
   VbbHcc_both_H_dR_stack_1->SetBinError(2,65.01191);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,17265.81);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,19121.06);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,28560.61);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,14963.77);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,40929.64);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,19411.39);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,33240.1);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,42895.55);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,29790.07);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,17084.25);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,20207.74);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,66531.95);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,43961.87);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,57011.34);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,47813.49);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,36110.24);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,16872.67);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,25984.82);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,35259.72);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,9768.828);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,9228.878);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,6918.366);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,6674.07);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,5523.273);
   VbbHcc_both_H_dR_stack_1->SetBinError(27,1634.292);
   VbbHcc_both_H_dR_stack_1->SetBinError(28,606.3319);
   VbbHcc_both_H_dR_stack_1->SetBinError(29,366.7729);
   VbbHcc_both_H_dR_stack_1->SetEntries(271342);

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
   VbbHcc_both_H_dR_stack_2->SetBinContent(2,35.80192);
   VbbHcc_both_H_dR_stack_2->SetBinContent(3,38156.31);
   VbbHcc_both_H_dR_stack_2->SetBinContent(4,67159.75);
   VbbHcc_both_H_dR_stack_2->SetBinContent(5,78800.14);
   VbbHcc_both_H_dR_stack_2->SetBinContent(6,84572.55);
   VbbHcc_both_H_dR_stack_2->SetBinContent(7,81670.6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(8,76364.36);
   VbbHcc_both_H_dR_stack_2->SetBinContent(9,74846.54);
   VbbHcc_both_H_dR_stack_2->SetBinContent(10,78896.15);
   VbbHcc_both_H_dR_stack_2->SetBinContent(11,88003.57);
   VbbHcc_both_H_dR_stack_2->SetBinContent(12,100665.3);
   VbbHcc_both_H_dR_stack_2->SetBinContent(13,116271.6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(14,133407.2);
   VbbHcc_both_H_dR_stack_2->SetBinContent(15,150257.7);
   VbbHcc_both_H_dR_stack_2->SetBinContent(16,153221.9);
   VbbHcc_both_H_dR_stack_2->SetBinContent(17,86949.44);
   VbbHcc_both_H_dR_stack_2->SetBinContent(18,54366.27);
   VbbHcc_both_H_dR_stack_2->SetBinContent(19,35520.47);
   VbbHcc_both_H_dR_stack_2->SetBinContent(20,23497.39);
   VbbHcc_both_H_dR_stack_2->SetBinContent(21,15389.57);
   VbbHcc_both_H_dR_stack_2->SetBinContent(22,9896.391);
   VbbHcc_both_H_dR_stack_2->SetBinContent(23,6184.152);
   VbbHcc_both_H_dR_stack_2->SetBinContent(24,3625.752);
   VbbHcc_both_H_dR_stack_2->SetBinContent(25,1909.729);
   VbbHcc_both_H_dR_stack_2->SetBinContent(26,926.8884);
   VbbHcc_both_H_dR_stack_2->SetBinContent(27,370.4634);
   VbbHcc_both_H_dR_stack_2->SetBinContent(28,98.53122);
   VbbHcc_both_H_dR_stack_2->SetBinContent(29,6.695558);
   VbbHcc_both_H_dR_stack_2->SetBinError(2,3.478969);
   VbbHcc_both_H_dR_stack_2->SetBinError(3,57.3968);
   VbbHcc_both_H_dR_stack_2->SetBinError(4,75.4584);
   VbbHcc_both_H_dR_stack_2->SetBinError(5,81.40477);
   VbbHcc_both_H_dR_stack_2->SetBinError(6,84.40949);
   VbbHcc_both_H_dR_stack_2->SetBinError(7,82.90762);
   VbbHcc_both_H_dR_stack_2->SetBinError(8,80.34532);
   VbbHcc_both_H_dR_stack_2->SetBinError(9,80.00452);
   VbbHcc_both_H_dR_stack_2->SetBinError(10,82.61373);
   VbbHcc_both_H_dR_stack_2->SetBinError(11,86.56286);
   VbbHcc_both_H_dR_stack_2->SetBinError(12,93.10982);
   VbbHcc_both_H_dR_stack_2->SetBinError(13,99.66893);
   VbbHcc_both_H_dR_stack_2->SetBinError(14,106.9182);
   VbbHcc_both_H_dR_stack_2->SetBinError(15,114.0015);
   VbbHcc_both_H_dR_stack_2->SetBinError(16,115.041);
   VbbHcc_both_H_dR_stack_2->SetBinError(17,86.77697);
   VbbHcc_both_H_dR_stack_2->SetBinError(18,68.38445);
   VbbHcc_both_H_dR_stack_2->SetBinError(19,54.57671);
   VbbHcc_both_H_dR_stack_2->SetBinError(20,44.58661);
   VbbHcc_both_H_dR_stack_2->SetBinError(21,35.64075);
   VbbHcc_both_H_dR_stack_2->SetBinError(22,28.89062);
   VbbHcc_both_H_dR_stack_2->SetBinError(23,22.71594);
   VbbHcc_both_H_dR_stack_2->SetBinError(24,17.23165);
   VbbHcc_both_H_dR_stack_2->SetBinError(25,12.05499);
   VbbHcc_both_H_dR_stack_2->SetBinError(26,8.944338);
   VbbHcc_both_H_dR_stack_2->SetBinError(27,5.402127);
   VbbHcc_both_H_dR_stack_2->SetBinError(28,2.680883);
   VbbHcc_both_H_dR_stack_2->SetBinError(29,0.716291);
   VbbHcc_both_H_dR_stack_2->SetEntries(2.286567e+07);

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_18->Modified();
   H_dR_both_18->cd();
   H_dR_both_18->SetSelected(H_dR_both_18);
}
