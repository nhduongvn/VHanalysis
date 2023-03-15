#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_18_logY()
{
//=========Macro generated from canvas: Z_dR_algo_18/Z_dR_algo_18
//=========  (Thu Mar  9 13:18:02 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_18 = new TCanvas("Z_dR_algo_18", "Z_dR_algo_18",0,0,600,600);
   Z_dR_algo_18->SetHighLightColor(2);
   Z_dR_algo_18->Range(-1.310117,-0.3033434,7.029799,6.345015);
   Z_dR_algo_18->SetFillColor(0);
   Z_dR_algo_18->SetFillStyle(4000);
   Z_dR_algo_18->SetBorderMode(0);
   Z_dR_algo_18->SetBorderSize(2);
   Z_dR_algo_18->SetLogy();
   Z_dR_algo_18->SetLeftMargin(0.15709);
   Z_dR_algo_18->SetRightMargin(0.1234783);
   Z_dR_algo_18->SetBottomMargin(0.12);
   Z_dR_algo_18->SetFrameFillStyle(1000);
   Z_dR_algo_18->SetFrameBorderMode(0);
   Z_dR_algo_18->SetFrameFillStyle(1000);
   Z_dR_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(254539.7);
   
   TH1F *st_stack_83 = new TH1F("st_stack_83","",30,0,6);
   st_stack_83->SetMinimum(3.122192);
   st_stack_83->SetMaximum(478827.6);
   st_stack_83->SetDirectory(0);
   st_stack_83->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_83->SetLineColor(ci);
   st_stack_83->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_83->GetXaxis()->SetRange(1,30);
   st_stack_83->GetXaxis()->SetLabelFont(42);
   st_stack_83->GetXaxis()->SetTitleOffset(1);
   st_stack_83->GetXaxis()->SetTitleFont(42);
   st_stack_83->GetYaxis()->SetTitle("Event/0.2");
   st_stack_83->GetYaxis()->SetLabelFont(42);
   st_stack_83->GetYaxis()->SetTitleSize(0.037);
   st_stack_83->GetYaxis()->SetTitleFont(42);
   st_stack_83->GetZaxis()->SetLabelFont(42);
   st_stack_83->GetZaxis()->SetTitleOffset(1);
   st_stack_83->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_83);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(2,379.817);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,209110.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,190265.5);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,140912.4);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,135570.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,113413.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,99741.82);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,93616.37);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,162808.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,99433.56);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,94608.81);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,69431.44);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,84406.03);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,55574.16);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,52374.67);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,28209.77);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,13801.9);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,11169.64);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,4677.634);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(21,4316.864);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(22,3193.929);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(23,701.0487);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(24,1062.862);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(25,91.16315);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(26,5.490769);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(27,10.1077);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(2,364.6701);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,30517.09);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,11795.17);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,10797.9);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,10447.34);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,9438.296);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,9079.251);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,9589.438);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,41656.67);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,24642.13);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,33006.88);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,8681.138);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,30494.54);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,7768.31);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,7468.614);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,4732.123);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,2760.573);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,2995.486);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,1991.155);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(21,2304.366);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(22,1955.803);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(23,321.237);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(24,603.5467);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(25,48.14672);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(26,5.490769);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(27,9.30864);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(24627);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_2 = new TH1D("VbbHcc_algo_Z_dR_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(2,2.444326);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,2157.629);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,4530.165);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,5971.325);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,7287.551);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,8117.209);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,8476.281);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,8451.011);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,8021.017);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,7487.777);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,6761.977);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,6080.632);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,5463.721);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,4974.815);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,4322.81);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,1979.63);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,965.3222);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,484.7684);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,249.9327);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,120.7741);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,53.71338);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(23,23.41829);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(24,10.43902);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(25,4.427494);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(26,1.257567);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(27,0.2604912);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(28,0.08328724);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(2,0.4445285);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,13.27743);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,19.56876);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,22.149);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,25.28894);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,25.78154);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,26.10149);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,26.34063);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,25.25931);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,24.41663);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,23.32029);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,21.77634);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,20.99092);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,20.70345);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,18.01573);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,12.6147);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,8.913374);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,5.839259);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,4.280076);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,3.131771);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,2.042852);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(23,1.303173);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(24,0.8507265);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(25,0.5497345);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(26,0.2932153);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(27,0.1266959);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(28,0.08328724);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(1407385);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","QCD","F");

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
   Z_dR_algo_18->Modified();
   Z_dR_algo_18->cd();
   Z_dR_algo_18->SetSelected(Z_dR_algo_18);
}
