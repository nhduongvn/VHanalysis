#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_both_16()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_16/Z_dR_Bj0_both_16
//=========  (Tue Feb 14 15:57:11 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_both_16 = new TCanvas("Z_dR_Bj0_both_16", "Z_dR_Bj0_both_16",0,0,600,600);
   Z_dR_Bj0_both_16->SetHighLightColor(2);
   Z_dR_Bj0_both_16->Range(-1.310117,-0.5805962,7.029799,4.257705);
   Z_dR_Bj0_both_16->SetFillColor(0);
   Z_dR_Bj0_both_16->SetFillStyle(4000);
   Z_dR_Bj0_both_16->SetBorderMode(0);
   Z_dR_Bj0_both_16->SetBorderSize(2);
   Z_dR_Bj0_both_16->SetLeftMargin(0.15709);
   Z_dR_Bj0_both_16->SetRightMargin(0.1234783);
   Z_dR_Bj0_both_16->SetBottomMargin(0.12);
   Z_dR_Bj0_both_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_16->SetFrameBorderMode(0);
   Z_dR_Bj0_both_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3.773875);
   
   TH1F *st_stack_177 = new TH1F("st_stack_177","",30,0,6);
   st_stack_177->SetMinimum(0);
   st_stack_177->SetMaximum(3.773875);
   st_stack_177->SetDirectory(0);
   st_stack_177->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_177->SetLineColor(ci);
   st_stack_177->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_177->GetXaxis()->SetRange(1,30);
   st_stack_177->GetXaxis()->SetLabelFont(42);
   st_stack_177->GetXaxis()->SetTitleOffset(1);
   st_stack_177->GetXaxis()->SetTitleFont(42);
   st_stack_177->GetYaxis()->SetTitle("Events/0.2");
   st_stack_177->GetYaxis()->SetLabelFont(42);
   st_stack_177->GetYaxis()->SetTitleSize(0.037);
   st_stack_177->GetYaxis()->SetTitleFont(42);
   st_stack_177->GetZaxis()->SetLabelFont(42);
   st_stack_177->GetZaxis()->SetTitleOffset(1);
   st_stack_177->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_177);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(1,0.4950363);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(2,1.594509);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(3,1.82425);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(4,1.643739);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(5,1.195198);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(6,0.7958872);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(7,0.5497365);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(8,0.4758913);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(9,0.361021);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(10,0.3199959);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(11,0.2297406);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(12,0.1859805);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(13,0.1969205);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(14,0.1285454);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(15,0.1832455);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(16,0.1723055);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(17,0.09025525);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(18,0.03008508);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(19,0.03282009);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(20,0.01914505);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(21,0.01367504);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(22,0.008205022);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(23,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(24,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(25,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(26,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(29,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(1,0.03679576);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(2,0.06603783);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(3,0.07063524);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(4,0.06704953);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(5,0.05717409);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(6,0.04665573);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(7,0.03877542);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(8,0.03607723);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(9,0.03142284);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(10,0.02958363);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(11,0.02506676);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(12,0.02255345);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(13,0.02320731);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(14,0.01875027);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(15,0.022387);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(16,0.02170845);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(17,0.01571142);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(18,0.009070994);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(19,0.009474344);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(20,0.00723615);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(21,0.006115663);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(22,0.004737172);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(23,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(24,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(25,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(26,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(29,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetEntries(3861);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(1,0.1843492);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(2,0.6859504);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(3,0.6916667);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(4,0.4912405);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(5,0.3240401);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(6,0.1918518);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(7,0.1446927);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(8,0.09824811);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(9,0.07609763);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(10,0.06573692);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(11,0.06180699);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(12,0.05180355);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(13,0.04215737);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(14,0.03965651);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(15,0.04322917);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(16,0.04108557);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(17,0.01857782);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(18,0.01214704);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(19,0.005716254);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(20,0.007145317);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(21,0.00428719);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(22,0.002143595);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(23,0.001071798);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(24,0.002500861);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(26,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(27,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(1,0.00811552);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(2,0.01565461);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(3,0.0157197);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(4,0.01324777);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(5,0.01075958);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(6,0.008279015);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(7,0.007189836);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(8,0.005924584);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(9,0.005214123);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(10,0.00484619);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(11,0.004699099);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(12,0.00430205);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(13,0.0038809);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(14,0.003764029);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(15,0.003929924);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(16,0.003831249);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(17,0.002576281);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(18,0.0020832);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(19,0.001429063);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(20,0.001597741);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(21,0.001237605);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(22,0.000875119);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(23,0.0006188026);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(24,0.0009452366);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(26,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(27,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetEntries(9203);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_1","ZHcc","F");

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
   Z_dR_Bj0_both_16->Modified();
   Z_dR_Bj0_both_16->cd();
   Z_dR_Bj0_both_16->SetSelected(Z_dR_Bj0_both_16);
}
