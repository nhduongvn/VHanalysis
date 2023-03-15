#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_17_logY()
{
//=========Macro generated from canvas: Z_dR_both_17/Z_dR_both_17
//=========  (Thu Mar  9 13:18:03 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_both_17 = new TCanvas("Z_dR_both_17", "Z_dR_both_17",0,0,600,600);
   Z_dR_both_17->SetHighLightColor(2);
   Z_dR_both_17->Range(-1.310117,-0.434317,7.029799,7.004501);
   Z_dR_both_17->SetFillColor(0);
   Z_dR_both_17->SetFillStyle(4000);
   Z_dR_both_17->SetBorderMode(0);
   Z_dR_both_17->SetBorderSize(2);
   Z_dR_both_17->SetLogy();
   Z_dR_both_17->SetLeftMargin(0.15709);
   Z_dR_both_17->SetRightMargin(0.1234783);
   Z_dR_both_17->SetBottomMargin(0.12);
   Z_dR_both_17->SetFrameFillStyle(1000);
   Z_dR_both_17->SetFrameBorderMode(0);
   Z_dR_both_17->SetFrameFillStyle(1000);
   Z_dR_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(914691.6);
   
   TH1F *st_stack_146 = new TH1F("st_stack_146","",30,0,6);
   st_stack_146->SetMinimum(2.873037);
   st_stack_146->SetMaximum(1822299);
   st_stack_146->SetDirectory(0);
   st_stack_146->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_146->SetLineColor(ci);
   st_stack_146->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_146->GetXaxis()->SetRange(1,30);
   st_stack_146->GetXaxis()->SetLabelFont(42);
   st_stack_146->GetXaxis()->SetTitleOffset(1);
   st_stack_146->GetXaxis()->SetTitleFont(42);
   st_stack_146->GetYaxis()->SetTitle("Event/0.2");
   st_stack_146->GetYaxis()->SetLabelFont(42);
   st_stack_146->GetYaxis()->SetTitleSize(0.037);
   st_stack_146->GetYaxis()->SetTitleFont(42);
   st_stack_146->GetZaxis()->SetLabelFont(42);
   st_stack_146->GetZaxis()->SetTitleOffset(1);
   st_stack_146->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_146);
   
   
   TH1D *VbbHcc_both_Z_dR_stack_1 = new TH1D("VbbHcc_both_Z_dR_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(2,1181.159);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,672611.6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,703989);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,491955.1);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,487145.1);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,483040.7);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,378606.2);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,331472.7);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,338499.8);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,362408.6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,376684.8);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,432207.5);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,516598.8);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,578048.8);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,632795.9);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,326589.3);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,189663.2);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,195496.7);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,89540.78);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,59108.26);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(22,38887.81);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(23,30049.81);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(24,22295.53);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(25,5060.026);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(26,1633.081);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(27,2429.833);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(28,526.5471);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(29,9.538623);
   VbbHcc_both_Z_dR_stack_1->SetBinError(2,514.8728);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,15395.81);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,21314.76);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,14581.93);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,32744.96);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,42666.66);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,27572.85);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,12321.62);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,12418.65);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,19738.15);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,23184.86);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,30429.13);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,38674.12);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,35969.88);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,44439.47);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,25906.66);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,9310.53);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,30779.85);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,6326.673);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,5089.144);
   VbbHcc_both_Z_dR_stack_1->SetBinError(22,4672.633);
   VbbHcc_both_Z_dR_stack_1->SetBinError(23,3966.646);
   VbbHcc_both_Z_dR_stack_1->SetBinError(24,3868.965);
   VbbHcc_both_Z_dR_stack_1->SetBinError(25,940.0279);
   VbbHcc_both_Z_dR_stack_1->SetBinError(26,457.3655);
   VbbHcc_both_Z_dR_stack_1->SetBinError(27,1713.528);
   VbbHcc_both_Z_dR_stack_1->SetBinError(28,351.282);
   VbbHcc_both_Z_dR_stack_1->SetBinError(29,9.167829);
   VbbHcc_both_Z_dR_stack_1->SetEntries(278187);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_2 = new TH1D("VbbHcc_both_Z_dR_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(2,10.51592);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,14460.92);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,28256.67);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,34436.52);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,41337.27);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,47487.91);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,53516.18);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,60082);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,67932.43);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,77543.04);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,88828.5);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,101736.1);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,114737.2);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,127079.6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,126398.1);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,64730.81);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,35839.63);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,20600.92);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,11764.59);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,6576.081);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,3594.213);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,1870.579);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,917.0078);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,426.1025);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(26,171.6544);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(27,54.40966);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(28,11.65962);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(29,0.7920896);
   VbbHcc_both_Z_dR_stack_2->SetBinError(2,0.8646562);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,32.71479);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,45.86768);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,50.67942);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,55.52389);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,59.53395);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,63.17546);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,66.95113);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,71.20873);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,76.15166);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,81.59951);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,87.4391);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,93.02581);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,98.0394);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,97.91093);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,70.09008);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,52.16178);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,39.53742);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,29.85022);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,22.27936);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,16.45193);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,11.79457);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,8.194972);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,5.568561);
   VbbHcc_both_Z_dR_stack_2->SetBinError(26,3.528757);
   VbbHcc_both_Z_dR_stack_2->SetBinError(27,1.938687);
   VbbHcc_both_Z_dR_stack_2->SetBinError(28,0.8675947);
   VbbHcc_both_Z_dR_stack_2->SetBinError(29,0.2340938);
   VbbHcc_both_Z_dR_stack_2->SetEntries(1.677555e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_1","QCD","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_both_17->Modified();
   Z_dR_both_17->cd();
   Z_dR_both_17->SetSelected(Z_dR_both_17);
}
