void Z_dR_algo_16_logY()
{
//=========Macro generated from canvas: Z_dR_algo_16/Z_dR_algo_16
//=========  (Thu Feb  9 09:44:32 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_algo_16 = new TCanvas("Z_dR_algo_16", "Z_dR_algo_16",0,0,600,600);
   Z_dR_algo_16->SetHighLightColor(2);
   Z_dR_algo_16->Range(-1.310117,-0.07264695,7.029799,0.5327443);
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
   st->SetMaximum(44.97192);
   
   TH1F *st_stack_81 = new TH1F("st_stack_81","",30,0,6);
   st_stack_81->SetMinimum(-3.151066e+09);
   st_stack_81->SetMaximum(-30.10473);
   st_stack_81->SetDirectory(0);
   st_stack_81->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_81->SetLineColor(ci);
   st_stack_81->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_81->GetXaxis()->SetRange(1,30);
   st_stack_81->GetXaxis()->SetLabelFont(42);
   st_stack_81->GetXaxis()->SetLabelSize(0.035);
   st_stack_81->GetXaxis()->SetTitleSize(0.035);
   st_stack_81->GetXaxis()->SetTitleFont(42);
   st_stack_81->GetYaxis()->SetTitle("Events/0.2");
   st_stack_81->GetYaxis()->SetLabelFont(42);
   st_stack_81->GetYaxis()->SetLabelSize(0.035);
   st_stack_81->GetYaxis()->SetTitleSize(0.037);
   st_stack_81->GetYaxis()->SetTitleOffset(0);
   st_stack_81->GetYaxis()->SetTitleFont(42);
   st_stack_81->GetZaxis()->SetLabelFont(42);
   st_stack_81->GetZaxis()->SetLabelSize(0.035);
   st_stack_81->GetZaxis()->SetTitleSize(0.035);
   st_stack_81->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_81);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,0.1488723);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,0.2932164);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,0.3189673);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,0.3250944);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,0.3024358);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,0.2642928);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,0.2326554);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,0.1152001);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,0.08949205);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,0.06303945);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,0.04614663);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,0.02693403);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,0.03649082);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,0.01761048);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,0.007791398);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,0.005802754);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,0.02158239);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,0.02958867);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,0.03156511);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,0.03142143);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,0.03030474);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,0.02813578);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,0.0266554);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,0.01887813);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,0.01616048);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,0.01379008);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,0.01156256);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,0.008992287);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,0.01026097);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,0.008319701);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,0.00452587);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,0.004104175);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(816);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_2 = new TH1D("VbbHcc_algo_Z_dR_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(2,0.0003747978);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,0.02987727);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,0.08533891);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,0.1108767);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,0.1246248);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,0.1026164);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,0.0551591);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,0.02956173);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,0.01847409);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,0.01297832);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,0.007675425);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,0.01004334);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,0.008183912);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,0.005454133);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,0.006053362);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,0.001557625);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,0.0007568422);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,0.0003402515);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,0.0007509657);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(2,0.0003747978);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,0.003369103);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,0.00572802);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,0.006518939);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,0.006919019);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,0.006299696);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,0.00463239);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,0.003379034);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,0.002663084);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,0.002232587);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,0.001719848);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,0.001952626);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,0.001762953);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,0.001457654);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,0.001517143);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,0.000780097);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,0.0005353326);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,0.0003402515);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,0.0005310596);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(1618);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
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
