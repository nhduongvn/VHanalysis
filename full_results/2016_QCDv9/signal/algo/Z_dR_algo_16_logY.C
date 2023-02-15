#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_16_logY()
{
//=========Macro generated from canvas: Z_dR_algo_16/Z_dR_algo_16
//=========  (Tue Feb 14 16:07:55 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_16 = new TCanvas("Z_dR_algo_16", "Z_dR_algo_16",0,0,600,600);
   Z_dR_algo_16->SetHighLightColor(2);
   Z_dR_algo_16->Range(-1.310117,-0.07198878,7.029799,0.5279177);
   Z_dR_algo_16->SetFillColor(0);
   Z_dR_algo_16->SetFillStyle(4000);
   Z_dR_algo_16->SetBorderMode(0);
   Z_dR_algo_16->SetBorderSize(2);
   Z_dR_algo_16->SetLogy();
   Z_dR_algo_16->SetLeftMargin(0.15709);
   Z_dR_algo_16->SetRightMargin(0.1234783);
   Z_dR_algo_16->SetBottomMargin(0.12);
   Z_dR_algo_16->SetFrameFillStyle(1000);
   Z_dR_algo_16->SetFrameBorderMode(0);
   Z_dR_algo_16->SetFrameFillStyle(1000);
   Z_dR_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   st->SetMaximum(44.56448);
   
   TH1F *st_stack_81 = new TH1F("st_stack_81","",30,0,6);
   st_stack_81->SetMinimum(-3.149105e+09);
   st_stack_81->SetMaximum(-29.86722);
   st_stack_81->SetDirectory(0);
   st_stack_81->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_81->SetLineColor(ci);
   st_stack_81->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_81->GetXaxis()->SetRange(1,30);
   st_stack_81->GetXaxis()->SetLabelFont(42);
   st_stack_81->GetXaxis()->SetTitleOffset(1);
   st_stack_81->GetXaxis()->SetTitleFont(42);
   st_stack_81->GetYaxis()->SetTitle("Events/0.2");
   st_stack_81->GetYaxis()->SetLabelFont(42);
   st_stack_81->GetYaxis()->SetTitleSize(0.037);
   st_stack_81->GetYaxis()->SetTitleFont(42);
   st_stack_81->GetZaxis()->SetLabelFont(42);
   st_stack_81->GetZaxis()->SetTitleOffset(1);
   st_stack_81->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_81);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,0.1488723);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,0.2876739);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,0.3221986);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,0.3221759);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,0.2967186);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,0.2614221);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,0.2298155);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,0.1004882);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,0.08949205);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,0.06303945);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,0.04614663);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,0.02693403);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,0.03649082);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,0.0205535);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,0.007791398);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,0.005802754);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,0.02158239);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,0.0293239);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,0.03173006);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,0.0312856);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,0.0300336);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,0.02798894);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,0.02650369);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,0.01769173);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,0.01616048);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,0.01379008);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,0.01156256);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,0.008992287);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,0.01026097);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,0.007781777);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,0.00452587);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,0.004104175);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(804);

   ci = TColor::GetColor("#cc0000");
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
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(2,0.0003747978);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,0.02987727);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,0.08454082);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,0.1105042);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,0.1234689);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,0.1014835);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,0.0547075);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,0.02956173);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,0.01847409);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,0.01297832);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,0.007675425);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,0.009886042);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,0.008183912);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,0.005654122);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,0.006053362);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,0.001557625);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,0.0007568422);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,0.0003402515);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,0.0007509657);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(2,0.0003747978);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,0.003369103);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,0.005700029);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,0.006508287);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,0.006886739);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,0.006265587);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,0.004610667);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,0.003379034);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,0.002663084);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,0.002232587);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,0.001719848);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,0.001928564);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,0.001762953);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,0.001471309);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,0.001517143);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,0.000780097);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,0.0005353326);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,0.0003402515);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,0.0005310596);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(1609);

   ci = TColor::GetColor("#00cc00");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","ZHcc","F");

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
   Z_dR_algo_16->Modified();
   Z_dR_algo_16->cd();
   Z_dR_algo_16->SetSelected(Z_dR_algo_16);
}
