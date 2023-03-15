#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_tags_all()
{
//=========Macro generated from canvas: H_dR_Bj1_tags_all/H_dR_Bj1_tags_all
//=========  (Tue Feb 14 15:57:09 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_tags_all = new TCanvas("H_dR_Bj1_tags_all", "H_dR_Bj1_tags_all",0,0,600,600);
   H_dR_Bj1_tags_all->SetHighLightColor(2);
   H_dR_Bj1_tags_all->Range(-1.310117,-1.955449,7.029799,14.33996);
   H_dR_Bj1_tags_all->SetFillColor(0);
   H_dR_Bj1_tags_all->SetFillStyle(4000);
   H_dR_Bj1_tags_all->SetBorderMode(0);
   H_dR_Bj1_tags_all->SetBorderSize(2);
   H_dR_Bj1_tags_all->SetLeftMargin(0.15709);
   H_dR_Bj1_tags_all->SetRightMargin(0.1234783);
   H_dR_Bj1_tags_all->SetBottomMargin(0.12);
   H_dR_Bj1_tags_all->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_all->SetFrameBorderMode(0);
   H_dR_Bj1_tags_all->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(12.71042);
   
   TH1F *st_stack_48 = new TH1F("st_stack_48","",30,0,6);
   st_stack_48->SetMinimum(0);
   st_stack_48->SetMaximum(12.71042);
   st_stack_48->SetDirectory(0);
   st_stack_48->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_48->SetLineColor(ci);
   st_stack_48->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_48->GetXaxis()->SetRange(1,30);
   st_stack_48->GetXaxis()->SetLabelFont(42);
   st_stack_48->GetXaxis()->SetTitleOffset(1);
   st_stack_48->GetXaxis()->SetTitleFont(42);
   st_stack_48->GetYaxis()->SetTitle("Events/0.2");
   st_stack_48->GetYaxis()->SetLabelFont(42);
   st_stack_48->GetYaxis()->SetTitleSize(0.037);
   st_stack_48->GetYaxis()->SetTitleFont(42);
   st_stack_48->GetZaxis()->SetLabelFont(42);
   st_stack_48->GetZaxis()->SetTitleOffset(1);
   st_stack_48->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_48);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(1,1.306083);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(2,5.149571);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(3,6.279364);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(4,5.680341);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(5,5.087537);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(6,4.326566);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(7,3.528355);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(8,2.69924);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(9,2.320159);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(10,1.844054);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(11,1.614671);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(12,1.419825);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(13,1.190929);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(14,1.146804);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(15,0.981205);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(16,0.9330539);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(17,0.5313739);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(18,0.3001349);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(19,0.1675105);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(20,0.1256007);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(21,0.08084126);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(22,0.03341435);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(23,0.02313608);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(24,0.02289981);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(25,0.0190438);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(26,0.00659102);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(27,0.007016515);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(28,0.001580251);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(29,0.003160502);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(1,0.05292177);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(2,0.1049695);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(3,0.1162351);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(4,0.1100247);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(5,0.104705);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(6,0.09596305);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(7,0.08738361);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(8,0.07618285);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(9,0.07087377);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(10,0.06267104);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(11,0.05876138);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(12,0.05514132);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(13,0.05048932);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(14,0.04966699);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(15,0.04590273);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(16,0.04482124);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(17,0.03348425);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(18,0.02545933);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(19,0.01879536);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(20,0.01656426);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(21,0.01323565);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(22,0.008836511);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(23,0.006786583);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(24,0.006758475);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(25,0.006164471);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(26,0.003893142);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(27,0.003559589);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(28,0.001580251);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(29,0.002234813);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetEntries(22839);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(1,0.4871574);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(2,1.887472);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(3,2.194247);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(4,1.894247);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(5,1.592827);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(6,1.229632);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(7,0.9919308);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(8,0.7457219);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(9,0.5817626);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(10,0.4731973);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(11,0.4088);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(12,0.3708606);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(13,0.3247685);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(14,0.3004501);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(15,0.2755379);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(16,0.2499014);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(17,0.1346441);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(18,0.08241341);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(19,0.05252043);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(20,0.03887236);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(21,0.02260557);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(22,0.01575986);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(23,0.01399406);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(24,0.007182114);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(25,0.00610998);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(26,0.003250844);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(27,0.002812466);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(28,0.0008645283);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(29,0.0005648715);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(31,0.0005072625);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(1,0.01171299);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(2,0.02306718);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(3,0.02484561);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(4,0.0230538);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(5,0.02121591);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(6,0.01860865);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(7,0.01671942);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(8,0.01447215);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(9,0.01276692);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(10,0.01157115);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(11,0.01076861);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(12,0.01027359);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(13,0.009520866);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(14,0.009223863);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(15,0.008843803);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(16,0.008400353);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(17,0.006212004);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(18,0.004819314);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(19,0.003863699);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(20,0.003316865);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(21,0.002551916);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(22,0.002068126);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(23,0.002018504);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(24,0.00141656);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(25,0.001304994);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(26,0.0009590356);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(27,0.0008969692);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(28,0.0005104245);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(29,0.0004132058);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(31,0.0003645467);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetEntries(53399);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_1","ZHcc","F");

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
   H_dR_Bj1_tags_all->Modified();
   H_dR_Bj1_tags_all->cd();
   H_dR_Bj1_tags_all->SetSelected(H_dR_Bj1_tags_all);
}
