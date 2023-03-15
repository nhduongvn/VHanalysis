#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_algo_18_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_18/H_dR_Bj1_algo_18
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_algo_18 = new TCanvas("H_dR_Bj1_algo_18", "H_dR_Bj1_algo_18",0,0,600,600);
   H_dR_Bj1_algo_18->SetHighLightColor(2);
   H_dR_Bj1_algo_18->Range(-1.310117,-0.07347783,7.029799,0.5388374);
   H_dR_Bj1_algo_18->SetFillColor(0);
   H_dR_Bj1_algo_18->SetFillStyle(4000);
   H_dR_Bj1_algo_18->SetBorderMode(0);
   H_dR_Bj1_algo_18->SetBorderSize(2);
   H_dR_Bj1_algo_18->SetLogy();
   H_dR_Bj1_algo_18->SetLeftMargin(0.15709);
   H_dR_Bj1_algo_18->SetRightMargin(0.1234783);
   H_dR_Bj1_algo_18->SetBottomMargin(0.12);
   H_dR_Bj1_algo_18->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_18->SetFrameBorderMode(0);
   H_dR_Bj1_algo_18->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_111 = new TH1F("st_stack_111","",30,0,6);
   st_stack_111->SetMinimum(-2.397472e+09);
   st_stack_111->SetMaximum(-0.4859862);
   st_stack_111->SetDirectory(0);
   st_stack_111->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_111->SetLineColor(ci);
   st_stack_111->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_111->GetXaxis()->SetRange(1,30);
   st_stack_111->GetXaxis()->SetLabelFont(42);
   st_stack_111->GetXaxis()->SetTitleOffset(1);
   st_stack_111->GetXaxis()->SetTitleFont(42);
   st_stack_111->GetYaxis()->SetTitle("Event/0.2");
   st_stack_111->GetYaxis()->SetLabelFont(42);
   st_stack_111->GetYaxis()->SetTitleSize(0.037);
   st_stack_111->GetYaxis()->SetTitleFont(42);
   st_stack_111->GetZaxis()->SetLabelFont(42);
   st_stack_111->GetZaxis()->SetTitleOffset(1);
   st_stack_111->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_111);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,0.06855717);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,0.2296665);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,0.3359302);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,0.3102212);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,0.2228108);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,0.1131193);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,0.07198503);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,0.04799002);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,0.02570894);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,0.03427859);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,0.02228108);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,0.01885322);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,0.01371143);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,0.01028358);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,0.01371143);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,0.005141788);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(18,0.005141788);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(19,0.003427859);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(20,0.001713929);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,0.01083984);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,0.01984017);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,0.02399501);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,0.02305856);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,0.0195418);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,0.01392403);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,0.01110753);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,0.009069262);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,0.00663802);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,0.007664925);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,0.00617966);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,0.005684461);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,0.004847724);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,0.004198252);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,0.004847724);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,0.002968613);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(18,0.002968613);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(19,0.002423862);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(20,0.001713929);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(907);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,0.01308935);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,0.05732234);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,0.1189326);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,0.1211894);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,0.07334552);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,0.03881671);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,0.02053675);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,0.0115096);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,0.01286368);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,0.006544677);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,0.005641963);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,0.005416285);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,0.006318999);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,0.004964928);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,0.006996034);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,0.002256785);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,0.001354071);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(19,0.0009027141);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,0.001128393);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(21,0.000451357);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,0.001718716);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,0.003596724);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,0.005180785);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,0.005229707);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,0.004068477);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,0.002959746);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,0.002152836);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,0.001611667);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,0.001703835);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,0.001215316);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,0.001128393);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,0.001105594);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,0.001194178);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,0.001058526);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,0.001256525);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,0.0007136582);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,0.0005527972);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(19,0.000451357);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,0.0005046325);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(21,0.0003191576);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(2258);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_algo_18->Modified();
   H_dR_Bj1_algo_18->cd();
   H_dR_Bj1_algo_18->SetSelected(H_dR_Bj1_algo_18);
}
