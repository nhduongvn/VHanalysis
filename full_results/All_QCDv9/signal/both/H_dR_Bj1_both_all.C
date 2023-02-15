#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_both_all()
{
//=========Macro generated from canvas: H_dR_Bj1_both_all/H_dR_Bj1_both_all
//=========  (Tue Feb 14 15:57:11 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_both_all = new TCanvas("H_dR_Bj1_both_all", "H_dR_Bj1_both_all",0,0,600,600);
   H_dR_Bj1_both_all->SetHighLightColor(2);
   H_dR_Bj1_both_all->Range(-1.310117,-2.021815,7.029799,14.82664);
   H_dR_Bj1_both_all->SetFillColor(0);
   H_dR_Bj1_both_all->SetFillStyle(4000);
   H_dR_Bj1_both_all->SetBorderMode(0);
   H_dR_Bj1_both_all->SetBorderSize(2);
   H_dR_Bj1_both_all->SetLeftMargin(0.15709);
   H_dR_Bj1_both_all->SetRightMargin(0.1234783);
   H_dR_Bj1_both_all->SetBottomMargin(0.12);
   H_dR_Bj1_both_all->SetFrameFillStyle(1000);
   H_dR_Bj1_both_all->SetFrameBorderMode(0);
   H_dR_Bj1_both_all->SetFrameFillStyle(1000);
   H_dR_Bj1_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(13.1418);
   
   TH1F *st_stack_176 = new TH1F("st_stack_176","",30,0,6);
   st_stack_176->SetMinimum(0);
   st_stack_176->SetMaximum(13.1418);
   st_stack_176->SetDirectory(0);
   st_stack_176->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_176->SetLineColor(ci);
   st_stack_176->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_176->GetXaxis()->SetRange(1,30);
   st_stack_176->GetXaxis()->SetLabelFont(42);
   st_stack_176->GetXaxis()->SetTitleOffset(1);
   st_stack_176->GetXaxis()->SetTitleFont(42);
   st_stack_176->GetYaxis()->SetTitle("Events/0.2");
   st_stack_176->GetYaxis()->SetLabelFont(42);
   st_stack_176->GetYaxis()->SetTitleSize(0.037);
   st_stack_176->GetYaxis()->SetTitleFont(42);
   st_stack_176->GetZaxis()->SetLabelFont(42);
   st_stack_176->GetZaxis()->SetTitleOffset(1);
   st_stack_176->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_176);
   
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(1,1.341739);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(2,5.32861);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(3,6.493471);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(4,5.822298);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(5,5.253109);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(6,4.452484);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(7,3.612323);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(8,2.738306);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(9,2.359367);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(10,1.874747);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(11,1.625118);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(12,1.452969);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(13,1.188843);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(14,1.171175);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(15,0.990261);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(16,0.9352826);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(17,0.528909);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(18,0.2926254);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(19,0.1666258);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(20,0.1256007);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(21,0.08199602);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(22,0.03341435);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(23,0.02313608);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(24,0.02289981);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(25,0.0190438);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(26,0.00659102);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(27,0.007016515);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(28,0.001580251);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(29,0.003160502);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(1,0.05365808);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(2,0.1067685);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(3,0.1182043);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(4,0.1114162);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(5,0.1064235);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(6,0.09742534);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(7,0.08838147);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(8,0.07672117);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(9,0.0714093);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(10,0.06321964);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(11,0.05895535);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(12,0.05579858);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(13,0.05040958);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(14,0.05025818);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(15,0.04609262);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(16,0.04484278);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(17,0.0334497);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(18,0.02506828);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(19,0.01880027);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(20,0.01656426);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(21,0.01342257);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(22,0.008836511);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(23,0.006786583);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(24,0.006758475);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(25,0.006164471);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(26,0.003893142);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(27,0.003559589);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(28,0.001580251);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(29,0.002234813);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetEntries(23382);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(1,0.5143284);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(2,1.954877);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(3,2.267727);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(4,1.952947);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(5,1.631748);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(6,1.268919);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(7,1.013823);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(8,0.763442);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(9,0.5937848);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(10,0.4822244);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(11,0.4147719);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(12,0.3818009);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(13,0.3321688);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(14,0.3080345);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(15,0.2828247);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(16,0.2516195);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(17,0.13718);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(18,0.08386631);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(19,0.05415743);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(20,0.03898791);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(21,0.02209865);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(22,0.01743131);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(23,0.01399406);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(24,0.008288354);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(25,0.00610998);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(26,0.003250844);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(27,0.002812466);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(28,0.0008645283);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(29,0.0005648715);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(31,0.0005072625);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(1,0.01203754);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(2,0.02347128);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(3,0.02525343);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(4,0.02340702);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(5,0.02146204);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(6,0.01891051);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(7,0.01690286);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(8,0.01463674);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(9,0.01290946);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(10,0.01167631);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(11,0.01083891);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(12,0.01042142);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(13,0.009635095);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(14,0.009346721);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(15,0.008953031);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(16,0.008427803);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(17,0.006271583);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(18,0.00485868);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(19,0.003924607);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(20,0.003316323);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(21,0.002509999);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(22,0.002181826);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(23,0.002018504);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(24,0.00154868);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(25,0.001304994);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(26,0.0009590356);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(27,0.0008969692);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(28,0.0005104245);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(29,0.0004132058);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(31,0.0003645467);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetEntries(54951);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_1","ZHcc","F");

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
   H_dR_Bj1_both_all->Modified();
   H_dR_Bj1_both_all->cd();
   H_dR_Bj1_both_all->SetSelected(H_dR_Bj1_both_all);
}
