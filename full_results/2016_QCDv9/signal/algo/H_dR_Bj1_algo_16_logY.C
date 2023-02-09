void H_dR_Bj1_algo_16_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_16/H_dR_Bj1_algo_16
//=========  (Thu Feb  9 09:44:33 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_algo_16 = new TCanvas("H_dR_Bj1_algo_16", "H_dR_Bj1_algo_16",0,0,600,600);
   H_dR_Bj1_algo_16->SetHighLightColor(2);
   H_dR_Bj1_algo_16->Range(-1.310117,-0.07724446,7.029799,0.5664594);
   H_dR_Bj1_algo_16->SetFillColor(0);
   H_dR_Bj1_algo_16->SetFillStyle(4000);
   H_dR_Bj1_algo_16->SetBorderMode(0);
   H_dR_Bj1_algo_16->SetBorderSize(2);
   H_dR_Bj1_algo_16->SetLogy();
   H_dR_Bj1_algo_16->SetLeftMargin(0.15709);
   H_dR_Bj1_algo_16->SetRightMargin(0.1234783);
   H_dR_Bj1_algo_16->SetBottomMargin(0.12);
   H_dR_Bj1_algo_16->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_16->SetFrameBorderMode(0);
   H_dR_Bj1_algo_16->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   st->SetMaximum(47.818);
   
   TH1F *st_stack_109 = new TH1F("st_stack_109","",30,0,6);
   st_stack_109->SetMinimum(-3.164352e+09);
   st_stack_109->SetMaximum(-31.75506);
   st_stack_109->SetDirectory(0);
   st_stack_109->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_109->SetLineColor(ci);
   st_stack_109->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_109->GetXaxis()->SetRange(1,30);
   st_stack_109->GetXaxis()->SetLabelFont(42);
   st_stack_109->GetXaxis()->SetLabelSize(0.035);
   st_stack_109->GetXaxis()->SetTitleSize(0.035);
   st_stack_109->GetXaxis()->SetTitleFont(42);
   st_stack_109->GetYaxis()->SetTitle("Events/0.2");
   st_stack_109->GetYaxis()->SetLabelFont(42);
   st_stack_109->GetYaxis()->SetLabelSize(0.035);
   st_stack_109->GetYaxis()->SetTitleSize(0.037);
   st_stack_109->GetYaxis()->SetTitleOffset(0);
   st_stack_109->GetYaxis()->SetTitleFont(42);
   st_stack_109->GetZaxis()->SetLabelFont(42);
   st_stack_109->GetZaxis()->SetLabelSize(0.035);
   st_stack_109->GetZaxis()->SetTitleSize(0.035);
   st_stack_109->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_109);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,0.02461507);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,0.1805105);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,0.2926458);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,0.2953808);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,0.377431);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,0.3199959);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,0.2188006);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,0.1449554);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,0.09299025);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,0.09025525);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,0.0382901);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,0.0382901);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,0.03008508);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,0.04102511);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,0.02461507);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,0.01094003);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(18,0.005470015);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(20,0.005470015);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,0.008205022);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,0.02221931);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,0.02829114);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,0.02842303);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,0.03212906);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,0.02958363);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,0.02446265);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,0.01991115);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,0.0159477);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,0.01571142);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,0.01023346);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,0.01023346);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,0.009070994);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,0.01059264);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,0.008205022);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,0.005470015);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(18,0.003867885);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(20,0.003867885);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(816);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,0.005358988);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,0.04430097);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,0.08467201);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,0.1164687);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,0.100749);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,0.06788051);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,0.04965995);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,0.02679494);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,0.02143595);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,0.01536243);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,0.01143251);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,0.008217114);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,0.005716254);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,0.005716254);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,0.006788051);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,0.003572658);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,0.001429063);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(19,0.0007145317);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,0.001786329);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,0.001383685);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,0.003978344);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,0.005500038);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,0.006450603);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,0.005999514);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,0.00492457);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,0.004212102);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,0.003094013);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,0.002767369);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,0.002342749);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,0.002021001);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,0.001713387);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,0.001429063);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,0.001429063);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,0.001557286);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,0.001129774);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,0.0007145317);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(19,0.0005052502);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,0.0007988707);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(1618);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_algo_16->Modified();
   H_dR_Bj1_algo_16->cd();
   H_dR_Bj1_algo_16->SetSelected(H_dR_Bj1_algo_16);
}
