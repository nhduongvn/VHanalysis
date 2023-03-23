#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_16()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_16/Z_dR_Bj0_algo_16
//=========  (Thu Mar 23 11:25:13 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_16 = new TCanvas("Z_dR_Bj0_algo_16", "Z_dR_Bj0_algo_16",0,0,600,600);
   Z_dR_Bj0_algo_16->SetHighLightColor(2);
   Z_dR_Bj0_algo_16->Range(-1.310117,-0.03426472,7.029799,0.2512746);
   Z_dR_Bj0_algo_16->SetFillColor(0);
   Z_dR_Bj0_algo_16->SetFillStyle(4000);
   Z_dR_Bj0_algo_16->SetBorderMode(0);
   Z_dR_Bj0_algo_16->SetBorderSize(2);
   Z_dR_Bj0_algo_16->SetLeftMargin(0.15709);
   Z_dR_Bj0_algo_16->SetRightMargin(0.1234783);
   Z_dR_Bj0_algo_16->SetBottomMargin(0.12);
   Z_dR_Bj0_algo_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_16->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.2227207);
   
   TH1F *st_stack_145 = new TH1F("st_stack_145","",30,0,6);
   st_stack_145->SetMinimum(0);
   st_stack_145->SetMaximum(0.2227207);
   st_stack_145->SetDirectory(0);
   st_stack_145->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_145->SetLineColor(ci);
   st_stack_145->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_145->GetXaxis()->SetRange(1,30);
   st_stack_145->GetXaxis()->SetLabelFont(42);
   st_stack_145->GetXaxis()->SetTitleOffset(1);
   st_stack_145->GetXaxis()->SetTitleFont(42);
   st_stack_145->GetYaxis()->SetTitle("Event/0.2");
   st_stack_145->GetYaxis()->SetLabelFont(42);
   st_stack_145->GetYaxis()->SetTitleSize(0.037);
   st_stack_145->GetYaxis()->SetTitleFont(42);
   st_stack_145->GetZaxis()->SetLabelFont(42);
   st_stack_145->GetZaxis()->SetTitleOffset(1);
   st_stack_145->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_145);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,0.04102511);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,0.1394854);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,0.09846027);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,0.0355551);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,0.01367504);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,0.008205022);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,0.005470015);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(12,0.002735007);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,0.01059264);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,0.01953186);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,0.01641004);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,0.00986121);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,0.006115663);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,0.004737172);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,0.003867885);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(12,0.002735007);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(126);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetFillColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,0.008217114);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,0.04537276);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,0.03215393);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,0.01178977);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,0.003929924);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,0.002143595);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,0.001071798);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,0.002858127);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,0.0007145317);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,0.001071798);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,0.0003572658);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,0.0003572658);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,0.001713387);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,0.004026182);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,0.003389321);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,0.002052336);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,0.001184917);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,0.000875119);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,0.0006188026);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,0.0010105);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,0.0005052502);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,0.0006188026);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,0.0003572658);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,0.0003572658);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(308);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetFillColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_algo_16->Modified();
   Z_dR_Bj0_algo_16->cd();
   Z_dR_Bj0_algo_16->SetSelected(Z_dR_Bj0_algo_16);
}
