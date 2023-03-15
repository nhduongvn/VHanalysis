#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_tags_all()
{
//=========Macro generated from canvas: Z_dR_Bj1_tags_all/Z_dR_Bj1_tags_all
//=========  (Wed Jan 18 11:40:23 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_tags_all = new TCanvas("Z_dR_Bj1_tags_all", "Z_dR_Bj1_tags_all",0,0,600,600);
   Z_dR_Bj1_tags_all->SetHighLightColor(2);
   Z_dR_Bj1_tags_all->Range(-1.310117,-1.594721,7.029799,11.69462);
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
   st->SetMaximum(10.36568);
   
   TH1F *st_stack_56 = new TH1F("st_stack_56","",30,0,6);
   st_stack_56->SetMinimum(0);
   st_stack_56->SetMaximum(10.36568);
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
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(1,0.9435103);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(2,3.735678);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(3,5.017082);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(4,4.511698);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(5,3.864823);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(6,2.788701);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(7,2.045774);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(8,1.462852);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(9,1.180906);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(10,0.9548749);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(11,0.7625906);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(12,0.6136538);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(13,0.5621508);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(14,0.5378786);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(15,0.4802458);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(16,0.4039802);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(17,0.2436201);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(18,0.1389513);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(19,0.09332078);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(20,0.06447459);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(21,0.0412221);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(22,0.02022477);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(23,0.01376206);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(24,0.005497579);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(25,0.008232439);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(26,0.004468371);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(27,0.001440646);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(28,0.002323422);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(29,0.003764068);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(30,0.003027725);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(31,0.001440646);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(1,0.04192468);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(2,0.08409204);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(3,0.0977778);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(4,0.09218581);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(5,0.08559699);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(6,0.07272763);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(7,0.06208664);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(8,0.05220974);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(9,0.04681007);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(10,0.04229411);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(11,0.03791191);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(12,0.03410032);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(13,0.03237466);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(14,0.03196829);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(15,0.03064711);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(16,0.02754539);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(17,0.02150432);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(18,0.01599);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(19,0.01335263);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(20,0.01082193);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(21,0.008798963);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(22,0.005924361);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(23,0.005316287);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(24,0.003230469);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(25,0.003760784);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(26,0.002582584);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(27,0.001440646);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(28,0.002323422);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(29,0.002733816);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(30,0.002143427);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(31,0.001440646);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetEntries(16887);

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
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(1,0.4741676);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(2,1.565581);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(3,1.893374);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(4,1.514815);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(5,1.034513);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(6,0.6853752);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(7,0.4518668);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(8,0.3127355);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(9,0.2483775);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(10,0.1919953);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(11,0.1842354);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(12,0.1567195);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(13,0.1398384);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(14,0.1203201);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(15,0.11359);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(16,0.09970944);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(17,0.06645247);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(18,0.03907244);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(19,0.02436723);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(20,0.01767565);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(21,0.01376023);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(22,0.006925287);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(23,0.004633772);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(24,0.002210035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(25,0.001890703);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(26,0.001408412);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(27,0.00104834);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(28,0.000180036);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(29,0.0003600719);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(1,0.01117646);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(2,0.02045269);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(3,0.02249907);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(4,0.02009596);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(5,0.01667619);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(6,0.01349249);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(7,0.0109818);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(8,0.00907676);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(9,0.00804394);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(10,0.007133833);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(11,0.006937594);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(12,0.00641447);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(13,0.006041238);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(14,0.005604137);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(15,0.005486417);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(16,0.005096872);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(17,0.00417181);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(18,0.003220747);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(19,0.002513755);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(20,0.002233454);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(21,0.001879837);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(22,0.001358304);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(23,0.001132922);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(24,0.0007271986);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(25,0.0006930519);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(26,0.000605399);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(27,0.000549256);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(28,0.000180036);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(29,0.0002546093);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetEntries(38012);

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
