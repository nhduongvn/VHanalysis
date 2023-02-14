#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_tags_16_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_16/Z_dR_Bj0_tags_16
//=========  (Tue Feb 14 10:43:06 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_tags_16 = new TCanvas("Z_dR_Bj0_tags_16", "Z_dR_Bj0_tags_16",0,0,600,600);
   Z_dR_Bj0_tags_16->SetHighLightColor(2);
   Z_dR_Bj0_tags_16->Range(-1.310117,0.5063301,7.029799,2.713893);
   Z_dR_Bj0_tags_16->SetFillColor(0);
   Z_dR_Bj0_tags_16->SetFillStyle(4000);
   Z_dR_Bj0_tags_16->SetBorderMode(0);
   Z_dR_Bj0_tags_16->SetBorderSize(2);
   Z_dR_Bj0_tags_16->SetLogy();
   Z_dR_Bj0_tags_16->SetLeftMargin(0.15709);
   Z_dR_Bj0_tags_16->SetRightMargin(0.1234783);
   Z_dR_Bj0_tags_16->SetBottomMargin(0.12);
   Z_dR_Bj0_tags_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_16->SetFrameBorderMode(0);
   Z_dR_Bj0_tags_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(243.6811);
   
   TH1F *st_stack_49 = new TH1F("st_stack_49","",30,0,6);
   st_stack_49->SetMinimum(5.905241);
   st_stack_49->SetMaximum(311.2696);
   st_stack_49->SetDirectory(0);
   st_stack_49->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_49->SetLineColor(ci);
   st_stack_49->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_49->GetXaxis()->SetRange(1,30);
   st_stack_49->GetXaxis()->SetLabelFont(42);
   st_stack_49->GetXaxis()->SetTitleOffset(1);
   st_stack_49->GetXaxis()->SetTitleFont(42);
   st_stack_49->GetYaxis()->SetTitle("Events/0.2");
   st_stack_49->GetYaxis()->SetLabelFont(42);
   st_stack_49->GetYaxis()->SetTitleSize(0.037);
   st_stack_49->GetYaxis()->SetTitleFont(42);
   st_stack_49->GetZaxis()->SetLabelFont(42);
   st_stack_49->GetZaxis()->SetTitleOffset(1);
   st_stack_49->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_49);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(1,0.4758913);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(2,1.569894);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(3,1.76408);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(4,1.591774);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(5,1.165113);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(6,0.7876821);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(7,0.5305914);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(8,0.4540112);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(9,0.358286);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(10,0.3254659);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(11,0.2160656);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(12,0.1859805);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(13,0.1914505);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(14,0.1285454);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(15,0.1832455);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(16,0.1668355);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(17,0.09025525);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(18,0.03008508);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(19,0.03282009);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(20,0.01641004);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(21,0.01367504);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(22,0.005470015);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(23,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(24,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(25,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(26,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(29,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(1,0.03607723);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(2,0.06552612);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(3,0.06946057);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(4,0.06598117);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(5,0.05644992);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(6,0.04641462);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(7,0.03809425);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(8,0.03523811);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(9,0.03130359);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(10,0.02983541);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(11,0.02430928);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(12,0.02255345);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(13,0.02288271);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(14,0.01875027);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(15,0.022387);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(16,0.02136109);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(17,0.01571142);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(18,0.009070994);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(19,0.009474344);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(20,0.006699373);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(21,0.006115663);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(22,0.003867885);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(23,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(24,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(25,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(26,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(29,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetEntries(3765);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(1,0.1757748);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(2,0.6645145);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(3,0.6727316);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(4,0.4815944);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(5,0.3136794);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(6,0.1882791);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(7,0.14112);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(8,0.09610451);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(9,0.07359676);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(10,0.06466512);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(11,0.06216426);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(12,0.04965995);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(13,0.03929924);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(14,0.03679838);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(15,0.04322917);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(16,0.04001377);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(17,0.01893509);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(18,0.01143251);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(19,0.005358988);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(20,0.006430785);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(21,0.00428719);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(22,0.002143595);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(23,0.001071798);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(24,0.001786329);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(26,0.0003572658);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(27,0.0003572658);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(1,0.00792454);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(2,0.01540806);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(3,0.01550303);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(4,0.01311706);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(5,0.01058617);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(6,0.008201566);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(7,0.007100518);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(8,0.005859596);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(9,0.00512773);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(10,0.00480652);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(11,0.00471266);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(12,0.004212102);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(13,0.003747036);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(14,0.003625852);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(15,0.003929924);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(16,0.003780946);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(17,0.002600935);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(18,0.002021001);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(19,0.001383685);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(20,0.001515751);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(21,0.001237605);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(22,0.000875119);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(23,0.0006188026);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(24,0.0007988707);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(26,0.0003572658);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(27,0.0003572658);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetEntries(8944);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_1","ZHcc","F");

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
   Z_dR_Bj0_tags_16->Modified();
   Z_dR_Bj0_tags_16->cd();
   Z_dR_Bj0_tags_16->SetSelected(Z_dR_Bj0_tags_16);
}
