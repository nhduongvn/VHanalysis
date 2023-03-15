#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_tags_16_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_tags_16/H_dR_Bj1_tags_16
//=========  (Thu Mar  9 13:08:25 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_tags_16 = new TCanvas("H_dR_Bj1_tags_16", "H_dR_Bj1_tags_16",0,0,600,600);
   H_dR_Bj1_tags_16->SetHighLightColor(2);
   H_dR_Bj1_tags_16->Range(-1.310117,-0.004698276,7.029799,0.01412541);
   H_dR_Bj1_tags_16->SetFillColor(0);
   H_dR_Bj1_tags_16->SetFillStyle(4000);
   H_dR_Bj1_tags_16->SetBorderMode(0);
   H_dR_Bj1_tags_16->SetBorderSize(2);
   H_dR_Bj1_tags_16->SetLogy();
   H_dR_Bj1_tags_16->SetLeftMargin(0.15709);
   H_dR_Bj1_tags_16->SetRightMargin(0.1234783);
   H_dR_Bj1_tags_16->SetBottomMargin(0.12);
   H_dR_Bj1_tags_16->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_16->SetFrameBorderMode(0);
   H_dR_Bj1_tags_16->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(1.026279);
   
   TH1F *st_stack_45 = new TH1F("st_stack_45","",30,0,6);
   st_stack_45->SetMinimum(0.9943987);
   st_stack_45->SetMaximum(1.028592);
   st_stack_45->SetDirectory(0);
   st_stack_45->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_45->SetLineColor(ci);
   st_stack_45->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_45->GetXaxis()->SetRange(1,30);
   st_stack_45->GetXaxis()->SetLabelFont(42);
   st_stack_45->GetXaxis()->SetTitleOffset(1);
   st_stack_45->GetXaxis()->SetTitleFont(42);
   st_stack_45->GetYaxis()->SetTitle("Event/0.2");
   st_stack_45->GetYaxis()->SetLabelFont(42);
   st_stack_45->GetYaxis()->SetTitleSize(0.037);
   st_stack_45->GetYaxis()->SetTitleFont(42);
   st_stack_45->GetZaxis()->SetLabelFont(42);
   st_stack_45->GetZaxis()->SetTitleOffset(1);
   st_stack_45->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_45);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(1,0.1312804);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(2,0.5032414);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(3,0.5852916);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(4,0.5798216);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(5,0.4567462);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(6,0.2981158);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(7,0.2023906);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(8,0.1832455);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(9,0.1066653);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(10,0.1011953);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(11,0.07931522);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(12,0.08478523);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(13,0.0738452);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(14,0.07658021);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(15,0.07111019);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(16,0.0738452);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(17,0.02735007);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(18,0.02735007);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(19,0.01367504);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(20,0.01094003);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(21,0.01094003);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(22,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(25,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(1,0.01894869);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(2,0.03709945);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(3,0.04000971);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(4,0.03982231);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(5,0.03534409);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(6,0.02855432);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(7,0.02352742);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(8,0.022387);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(9,0.01708012);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(10,0.0166364);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(11,0.01472847);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(12,0.01522788);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(13,0.01421152);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(14,0.0144723);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(15,0.01394586);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(16,0.01421152);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(17,0.008648853);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(18,0.008648853);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(19,0.006115663);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(20,0.005470015);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(21,0.005470015);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(22,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(25,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetEntries(1354);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(1,0.04251464);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(2,0.1989971);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(3,0.2665203);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(4,0.2429408);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(5,0.1982825);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(6,0.1325456);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(7,0.0878874);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(8,0.06573692);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(9,0.04965995);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(10,0.04430097);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(11,0.04037104);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(12,0.03429752);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(13,0.02608041);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(14,0.02750947);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(15,0.02322228);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(16,0.02286501);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(17,0.01393337);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(18,0.009288912);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(19,0.00428719);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(20,0.003572658);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(21,0.002858127);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(22,0.001429063);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(23,0.002143595);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(24,0.001071798);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(25,0.001071798);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(28,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(29,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(1,0.00389731);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(2,0.008431777);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(3,0.009758002);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(4,0.009316353);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(5,0.008416625);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(6,0.006881426);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(7,0.005603496);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(8,0.00484619);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(9,0.004212102);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(10,0.003978344);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(11,0.003797788);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(12,0.003500476);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(13,0.003052481);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(14,0.003134995);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(15,0.002880369);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(16,0.002858127);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(17,0.002231125);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(18,0.001821706);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(19,0.001237605);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(20,0.001129774);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(21,0.0010105);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(22,0.0007145317);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(23,0.000875119);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(24,0.0006188026);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(25,0.0006188026);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(28,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(29,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetEntries(4322);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_1","ZHcc","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_tags_16->Modified();
   H_dR_Bj1_tags_16->cd();
   H_dR_Bj1_tags_16->SetSelected(H_dR_Bj1_tags_16);
}
