#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_17_logY()
{
//=========Macro generated from canvas: H_dR_algo_17/H_dR_algo_17
//=========  (Wed Jan 18 11:42:52 2023) by ROOT version 6.26/06
   TCanvas *H_dR_algo_17 = new TCanvas("H_dR_algo_17", "H_dR_algo_17",0,0,600,600);
   H_dR_algo_17->SetHighLightColor(2);
   H_dR_algo_17->Range(-1.353788,-0.8694936,7.264125,9.303016);
   H_dR_algo_17->SetFillColor(0);
   H_dR_algo_17->SetFillStyle(4000);
   H_dR_algo_17->SetBorderMode(0);
   H_dR_algo_17->SetBorderSize(2);
   H_dR_algo_17->SetLogy();
   H_dR_algo_17->SetLeftMargin(0.15709);
   H_dR_algo_17->SetRightMargin(0.1234783);
   H_dR_algo_17->SetBottomMargin(0.12);
   H_dR_algo_17->SetFrameFillStyle(1000);
   H_dR_algo_17->SetFrameBorderMode(0);
   H_dR_algo_17->SetFrameFillStyle(1000);
   H_dR_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(8.107089e+07);
   
   TH1F *st_stack_86 = new TH1F("st_stack_86","",30,0,6);
   st_stack_86->SetMinimum(2.244955);
   st_stack_86->SetMaximum(1.930925e+08);
   st_stack_86->SetDirectory(0);
   st_stack_86->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_86->SetLineColor(ci);
   st_stack_86->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_86->GetXaxis()->SetRange(1,31);
   st_stack_86->GetXaxis()->SetLabelFont(42);
   st_stack_86->GetXaxis()->SetTitleOffset(1);
   st_stack_86->GetXaxis()->SetTitleFont(42);
   st_stack_86->GetYaxis()->SetTitle("Events/0.2");
   st_stack_86->GetYaxis()->SetLabelFont(42);
   st_stack_86->GetYaxis()->SetTitleSize(0.037);
   st_stack_86->GetYaxis()->SetTitleFont(42);
   st_stack_86->GetZaxis()->SetLabelFont(42);
   st_stack_86->GetZaxis()->SetTitleOffset(1);
   st_stack_86->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_86);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(2,27.31799);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,398181.4);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,552948.4);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,513148.2);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,533321);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,534735.7);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,566450.6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,667501.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,594675.4);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,577996.8);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,708342.4);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,787464.2);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,801325.4);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,703566.5);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,686787);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,421175.4);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,247070);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,138706.4);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,98824.23);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(21,54825.79);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(22,20368.17);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(23,9599.422);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(24,4918.434);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(25,3717.321);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(26,2225.159);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(27,295.4699);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(28,3.778782);
   VbbHcc_algo_H_dR_stack_1->SetBinError(2,27.31799);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,43973.29);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,60622.42);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,64491.36);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,67621.6);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,65000.36);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,67101.8);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,78045.86);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,67097.74);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,65582.38);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,76277.67);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,80210.1);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,88036.26);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,71961.43);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,75650.74);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,59366.65);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,47157.48);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,34344.68);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,24856.09);
   VbbHcc_algo_H_dR_stack_1->SetBinError(21,15462.27);
   VbbHcc_algo_H_dR_stack_1->SetBinError(22,4514.938);
   VbbHcc_algo_H_dR_stack_1->SetBinError(23,2880.357);
   VbbHcc_algo_H_dR_stack_1->SetBinError(24,2227.773);
   VbbHcc_algo_H_dR_stack_1->SetBinError(25,2232.942);
   VbbHcc_algo_H_dR_stack_1->SetBinError(26,1521.731);
   VbbHcc_algo_H_dR_stack_1->SetBinError(27,250.1286);
   VbbHcc_algo_H_dR_stack_1->SetBinError(28,3.778782);
   VbbHcc_algo_H_dR_stack_1->SetEntries(41411);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_2 = new TH1D("VbbHcc_algo_H_dR_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(2,1.619435);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,2794.284);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,6206.357);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,8918.82);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,11635.09);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,12798.65);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,12586.19);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,12053.48);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,11583.91);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,11253.18);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,10919.8);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,10364.9);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,9383.451);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,8442.915);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,7393.58);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,4393.592);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,2699.957);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,1653.531);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,982.916);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,555.17);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,291.4309);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(23,146.6624);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(24,67.68639);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(25,28.51586);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(26,9.360226);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(27,2.450107);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(28,0.3317244);
   VbbHcc_algo_H_dR_stack_2->SetBinError(2,0.3393621);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,13.80595);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,20.58635);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,24.68943);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,28.26196);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,29.81875);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,29.7938);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,29.36436);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,28.90332);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,28.52703);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,28.10909);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,27.36913);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,25.9768);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,24.53348);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,22.90926);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,17.56679);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,13.70246);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,10.6471);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,8.14776);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,6.084959);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,4.371058);
   VbbHcc_algo_H_dR_stack_2->SetBinError(23,3.081267);
   VbbHcc_algo_H_dR_stack_2->SetBinError(24,2.079385);
   VbbHcc_algo_H_dR_stack_2->SetBinError(25,1.349173);
   VbbHcc_algo_H_dR_stack_2->SetBinError(26,0.7698961);
   VbbHcc_algo_H_dR_stack_2->SetBinError(27,0.3906244);
   VbbHcc_algo_H_dR_stack_2->SetBinError(28,0.1250855);
   VbbHcc_algo_H_dR_stack_2->SetEntries(2316312);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_1","QCD","F");

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
   H_dR_algo_17->Modified();
   H_dR_algo_17->cd();
   H_dR_algo_17->SetSelected(H_dR_algo_17);
}
