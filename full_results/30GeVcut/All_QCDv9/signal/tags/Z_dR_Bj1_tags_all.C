#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_tags_all()
{
//=========Macro generated from canvas: Z_dR_Bj1_tags_all/Z_dR_Bj1_tags_all
//=========  (Tue Feb 14 15:57:09 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_tags_all = new TCanvas("Z_dR_Bj1_tags_all", "Z_dR_Bj1_tags_all",0,0,600,600);
   Z_dR_Bj1_tags_all->SetHighLightColor(2);
   Z_dR_Bj1_tags_all->Range(-1.310117,-2.568278,7.029799,18.83404);
   Z_dR_Bj1_tags_all->SetFillColor(0);
   Z_dR_Bj1_tags_all->SetFillStyle(4000);
   Z_dR_Bj1_tags_all->SetBorderMode(0);
   Z_dR_Bj1_tags_all->SetBorderSize(2);
   Z_dR_Bj1_tags_all->SetLeftMargin(0.15709);
   Z_dR_Bj1_tags_all->SetRightMargin(0.1234783);
   Z_dR_Bj1_tags_all->SetBottomMargin(0.12);
   Z_dR_Bj1_tags_all->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_all->SetFrameBorderMode(0);
   Z_dR_Bj1_tags_all->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(16.69381);
   
   TH1F *st_stack_56 = new TH1F("st_stack_56","",30,0,6);
   st_stack_56->SetMinimum(0);
   st_stack_56->SetMaximum(16.69381);
   st_stack_56->SetDirectory(0);
   st_stack_56->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_56->SetLineColor(ci);
   st_stack_56->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_56->GetXaxis()->SetRange(1,30);
   st_stack_56->GetXaxis()->SetLabelFont(42);
   st_stack_56->GetXaxis()->SetTitleOffset(1);
   st_stack_56->GetXaxis()->SetTitleFont(42);
   st_stack_56->GetYaxis()->SetTitle("Events/0.2");
   st_stack_56->GetYaxis()->SetLabelFont(42);
   st_stack_56->GetYaxis()->SetTitleSize(0.037);
   st_stack_56->GetYaxis()->SetTitleFont(42);
   st_stack_56->GetZaxis()->SetLabelFont(42);
   st_stack_56->GetZaxis()->SetTitleOffset(1);
   st_stack_56->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_56);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(1,1.739043);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(2,6.591473);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(3,8.097016);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(4,7.03153);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(5,5.474382);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(6,4.088747);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(7,2.880831);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(8,2.254452);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(9,1.716529);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(10,1.312552);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(11,1.089862);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(12,0.9340348);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(13,0.7719053);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(14,0.7405979);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(15,0.684203);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(16,0.5898687);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(17,0.3274247);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(18,0.209717);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(19,0.1005939);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(20,0.05085743);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(21,0.03569011);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(22,0.04263912);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(23,0.02435834);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(24,0.02814685);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(25,0.00589551);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(26,0.003856013);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(28,0.002275762);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(31,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(1,0.06100921);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(2,0.1189837);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(3,0.1319727);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(4,0.1230781);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(5,0.1081789);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(6,0.09354627);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(7,0.07822674);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(8,0.06965101);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(9,0.06037758);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(10,0.05318187);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(11,0.04813328);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(12,0.04453697);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(13,0.04056096);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(14,0.03976783);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(15,0.03850732);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(16,0.0359531);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(17,0.02623249);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(18,0.02161881);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(19,0.01463985);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(20,0.01035667);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(21,0.009124857);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(22,0.009292986);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(23,0.007785557);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(24,0.007662707);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(25,0.003531947);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(26,0.002770611);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(28,0.002275762);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(31,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetEntries(22839);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(1,0.7188826);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(2,2.720691);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(3,3.032189);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(4,2.312854);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(5,1.519087);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(6,0.9284015);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(7,0.6128148);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(8,0.456527);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(9,0.3421627);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(10,0.2870583);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(11,0.2675523);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(12,0.2438457);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(13,0.2109816);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(14,0.1794569);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(15,0.171354);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(16,0.1558362);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(17,0.08446495);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(18,0.05214196);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(19,0.03485005);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(20,0.02207548);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(21,0.01555225);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(22,0.008853898);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(23,0.00410477);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(24,0.004115709);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(25,0.002767085);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(26,0.0009224738);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(27,0.0002996568);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(28,0.0005648715);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(29,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(1,0.01424234);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(2,0.02771485);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(3,0.02922531);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(4,0.02549588);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(5,0.02070365);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(6,0.01618364);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(7,0.01312919);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(8,0.01135732);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(9,0.009799626);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(10,0.008983272);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(11,0.008658108);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(12,0.008348269);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(13,0.007744162);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(14,0.007098397);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(15,0.006927693);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(16,0.006615719);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(17,0.004893355);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(18,0.003810995);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(19,0.003103249);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(20,0.002504216);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(21,0.002057679);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(22,0.001552605);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(23,0.001020716);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(24,0.001049285);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(25,0.0008582348);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(26,0.0004680753);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(27,0.0002996568);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(28,0.0004132058);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(29,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetEntries(53399);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_tags_all->Modified();
   Z_dR_Bj1_tags_all->cd();
   Z_dR_Bj1_tags_all->SetSelected(Z_dR_Bj1_tags_all);
}
