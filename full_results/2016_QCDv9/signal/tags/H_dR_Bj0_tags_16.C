#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_tags_16()
{
//=========Macro generated from canvas: H_dR_Bj0_tags_16/H_dR_Bj0_tags_16
//=========  (Tue Feb 14 15:57:09 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_tags_16 = new TCanvas("H_dR_Bj0_tags_16", "H_dR_Bj0_tags_16",0,0,600,600);
   H_dR_Bj0_tags_16->SetHighLightColor(2);
   H_dR_Bj0_tags_16->Range(-1.310117,-0.4713705,7.029799,3.456717);
   H_dR_Bj0_tags_16->SetFillColor(0);
   H_dR_Bj0_tags_16->SetFillStyle(4000);
   H_dR_Bj0_tags_16->SetBorderMode(0);
   H_dR_Bj0_tags_16->SetBorderSize(2);
   H_dR_Bj0_tags_16->SetLeftMargin(0.15709);
   H_dR_Bj0_tags_16->SetRightMargin(0.1234783);
   H_dR_Bj0_tags_16->SetBottomMargin(0.12);
   H_dR_Bj0_tags_16->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_16->SetFrameBorderMode(0);
   H_dR_Bj0_tags_16->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3.063908);
   
   TH1F *st_stack_41 = new TH1F("st_stack_41","",30,0,6);
   st_stack_41->SetMinimum(0);
   st_stack_41->SetMaximum(3.063908);
   st_stack_41->SetDirectory(0);
   st_stack_41->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_41->SetLineColor(ci);
   st_stack_41->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_41->GetXaxis()->SetRange(1,30);
   st_stack_41->GetXaxis()->SetLabelFont(42);
   st_stack_41->GetXaxis()->SetTitleOffset(1);
   st_stack_41->GetXaxis()->SetTitleFont(42);
   st_stack_41->GetYaxis()->SetTitle("Events/0.2");
   st_stack_41->GetYaxis()->SetLabelFont(42);
   st_stack_41->GetYaxis()->SetTitleSize(0.037);
   st_stack_41->GetYaxis()->SetTitleFont(42);
   st_stack_41->GetZaxis()->SetLabelFont(42);
   st_stack_41->GetZaxis()->SetTitleOffset(1);
   st_stack_41->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_41);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(1,0.350081);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(2,1.241693);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(3,1.537074);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(4,1.318274);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(5,1.126823);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(6,0.8642624);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(7,0.7658021);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(8,0.6126417);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(9,0.4348662);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(10,0.3418759);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(11,0.3254659);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(12,0.2735007);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(13,0.2105956);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(14,0.2297406);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(15,0.1586304);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(16,0.2105956);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(17,0.09299025);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(18,0.05743516);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(19,0.05196514);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(20,0.0382901);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(21,0.01094003);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(22,0.01641004);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(23,0.005470015);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(24,0.01094003);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(25,0.005470015);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(26,0.005470015);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(1,0.03094308);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(2,0.05827556);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(3,0.06483756);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(4,0.06004572);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(5,0.05551459);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(6,0.04861856);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(7,0.04576543);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(8,0.04093384);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(9,0.03448713);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(10,0.03057831);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(11,0.02983541);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(12,0.02735007);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(13,0.02399959);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(14,0.02506676);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(15,0.0208292);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(16,0.02399959);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(17,0.0159477);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(18,0.01253338);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(19,0.01192162);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(20,0.01023346);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(21,0.005470015);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(22,0.006699373);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(23,0.003867885);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(24,0.005470015);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(25,0.003867885);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(26,0.003867885);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetEntries(3765);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(1,0.1261148);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(2,0.4437242);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(3,0.5055312);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(4,0.4437242);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(5,0.338688);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(6,0.2643767);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(7,0.1936381);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(8,0.1618414);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(9,0.1211131);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(10,0.09253185);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(11,0.08753013);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(12,0.07895575);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(13,0.06287879);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(14,0.0596634);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(15,0.0596634);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(16,0.05180355);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(17,0.02858127);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(18,0.02357955);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(19,0.01286157);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(20,0.01107524);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(21,0.006430785);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(22,0.007145317);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(23,0.003572658);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(24,0.00428719);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(25,0.003215393);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(26,0.0007145317);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(27,0.001071798);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(29,0.0007145317);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(30,0.0003572658);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(1,0.006712416);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(2,0.01259077);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(3,0.01343909);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(4,0.01259077);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(5,0.01100008);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(6,0.009718682);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(7,0.008317468);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(8,0.007603974);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(9,0.006577962);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(10,0.00574965);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(11,0.005592095);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(12,0.005311139);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(13,0.004739667);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(14,0.004616892);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(15,0.004616892);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(16,0.00430205);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(17,0.003195483);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(18,0.002902441);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(19,0.002143595);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(20,0.001989172);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(21,0.001515751);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(22,0.001597741);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(23,0.001129774);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(24,0.001237605);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(25,0.001071798);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(26,0.0005052502);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(27,0.0006188026);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(29,0.0005052502);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(30,0.0003572658);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetEntries(8944);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_1","ZHcc","F");

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
   H_dR_Bj0_tags_16->Modified();
   H_dR_Bj0_tags_16->cd();
   H_dR_Bj0_tags_16->SetSelected(H_dR_Bj0_tags_16);
}
