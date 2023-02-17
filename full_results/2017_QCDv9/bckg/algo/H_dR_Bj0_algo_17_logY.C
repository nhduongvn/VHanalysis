#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_17_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_17/H_dR_Bj0_algo_17
//=========  (Thu Feb 16 10:37:39 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_17 = new TCanvas("H_dR_Bj0_algo_17", "H_dR_Bj0_algo_17",0,0,600,600);
   H_dR_Bj0_algo_17->SetHighLightColor(2);
   H_dR_Bj0_algo_17->Range(-1.310117,-0.7779006,7.029799,8.806847);
   H_dR_Bj0_algo_17->SetFillColor(0);
   H_dR_Bj0_algo_17->SetFillStyle(4000);
   H_dR_Bj0_algo_17->SetBorderMode(0);
   H_dR_Bj0_algo_17->SetBorderSize(2);
   H_dR_Bj0_algo_17->SetLogy();
   H_dR_Bj0_algo_17->SetLeftMargin(0.15709);
   H_dR_Bj0_algo_17->SetRightMargin(0.1234783);
   H_dR_Bj0_algo_17->SetBottomMargin(0.12);
   H_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_17->SetFrameBorderMode(0);
   H_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(3.069946e+07);
   
   TH1F *st_stack_106 = new TH1F("st_stack_106","",30,0,6);
   st_stack_106->SetMinimum(2.356509);
   st_stack_106->SetMaximum(7.052973e+07);
   st_stack_106->SetDirectory(0);
   st_stack_106->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_106->SetLineColor(ci);
   st_stack_106->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_106->GetXaxis()->SetRange(1,30);
   st_stack_106->GetXaxis()->SetLabelFont(42);
   st_stack_106->GetXaxis()->SetTitleOffset(1);
   st_stack_106->GetXaxis()->SetTitleFont(42);
   st_stack_106->GetYaxis()->SetTitle("Events/0.2");
   st_stack_106->GetYaxis()->SetLabelFont(42);
   st_stack_106->GetYaxis()->SetTitleSize(0.037);
   st_stack_106->GetYaxis()->SetTitleFont(42);
   st_stack_106->GetZaxis()->SetLabelFont(42);
   st_stack_106->GetZaxis()->SetTitleOffset(1);
   st_stack_106->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_106);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,95693.28);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,293051.3);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,249508.2);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,149289.3);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,101470.4);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,80578.59);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,33303.95);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,23660.54);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,13813.84);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,11500.72);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,6095.888);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(12,10758.12);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(13,5264.418);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(14,5437.572);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(15,6873.319);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(16,2290.611);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(17,460.3011);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(18,17474.81);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(19,47.31729);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(20,52.36715);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(21,25.68089);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(22,30.9708);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(23,21.6364);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(24,30.53182);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(27,251.1178);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(30,1285.482);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,4462.094);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,19067.43);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,24896.62);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,9274.514);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,17429.19);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,17189.22);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,4224.884);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,3982.611);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,2868.893);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,2272.113);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,1618.065);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(12,3239.79);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(13,1969.679);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(14,2297.551);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(15,2644.309);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(16,1358.878);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(17,258.9901);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(18,15921.61);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(19,30.86463);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(20,26.86777);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(21,22.01117);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(22,23.39776);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(23,21.6364);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(24,23.39364);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(27,251.1178);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(30,1285.482);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(24778);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,4206.268);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,13943.22);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,14108.72);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,10436.17);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,6720.426);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,4210.62);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,2670.217);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,1775.301);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,1194.611);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,819.027);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,575.8325);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(12,403.3054);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,283.6526);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,198.8862);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(15,138.6142);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(16,98.19379);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(17,70.16523);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(18,47.41823);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(19,31.19215);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(20,24.427);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(21,14.37592);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(22,10.26949);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(23,7.800405);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(24,4.774355);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(25,3.675593);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(26,2.528355);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(27,1.804368);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(28,0.699624);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(29,0.491667);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(30,0.4780521);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(31,1.20651);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,16.08133);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,29.40574);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,29.88198);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,25.86809);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,20.81067);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,16.46999);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,13.11195);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,10.68691);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,8.757295);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,7.231546);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,6.070051);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(12,5.076342);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,4.260607);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,3.564727);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(15,2.976387);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(16,2.498871);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(17,2.11736);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(18,1.736963);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(19,1.398959);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(20,1.24876);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(21,0.9590148);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(22,0.8084462);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(23,0.7065165);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(24,0.5561245);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(25,0.4827315);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(26,0.3961486);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(27,0.3414431);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(28,0.213651);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(29,0.1779618);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(30,0.1817544);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(31,0.2803746);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(1015007);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_1","QCD","F");

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
   H_dR_Bj0_algo_17->Modified();
   H_dR_Bj0_algo_17->cd();
   H_dR_Bj0_algo_17->SetSelected(H_dR_Bj0_algo_17);
}
