#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_all()
{
//=========Macro generated from canvas: H_dR_tags_all/H_dR_tags_all
//=========  (Mon Dec 19 11:11:45 2022) by ROOT version 6.26/06
   TCanvas *H_dR_tags_all = new TCanvas("H_dR_tags_all", "H_dR_tags_all",0,0,600,600);
   H_dR_tags_all->SetHighLightColor(2);
   H_dR_tags_all->Range(-1.353788,-4616555,7.264125,3.385474e+07);
   H_dR_tags_all->SetFillColor(0);
   H_dR_tags_all->SetFillStyle(4000);
   H_dR_tags_all->SetBorderMode(0);
   H_dR_tags_all->SetBorderSize(2);
   H_dR_tags_all->SetLeftMargin(0.15709);
   H_dR_tags_all->SetRightMargin(0.1234783);
   H_dR_tags_all->SetBottomMargin(0.12);
   H_dR_tags_all->SetFrameFillStyle(1000);
   H_dR_tags_all->SetFrameBorderMode(0);
   H_dR_tags_all->SetFrameFillStyle(1000);
   H_dR_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3.000761e+07);
   
   TH1F *st_stack_24 = new TH1F("st_stack_24","",30,0,6);
   st_stack_24->SetMinimum(0);
   st_stack_24->SetMaximum(3.000761e+07);
   st_stack_24->SetDirectory(0);
   st_stack_24->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_24->SetLineColor(ci);
   st_stack_24->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_24->GetXaxis()->SetRange(1,31);
   st_stack_24->GetXaxis()->SetLabelFont(42);
   st_stack_24->GetXaxis()->SetTitleOffset(1);
   st_stack_24->GetXaxis()->SetTitleFont(42);
   st_stack_24->GetYaxis()->SetTitle("Events/0.2");
   st_stack_24->GetYaxis()->SetLabelFont(42);
   st_stack_24->GetYaxis()->SetTitleSize(0.037);
   st_stack_24->GetYaxis()->SetTitleFont(42);
   st_stack_24->GetZaxis()->SetLabelFont(42);
   st_stack_24->GetZaxis()->SetTitleOffset(1);
   st_stack_24->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_24);
   
   
   TH1D *VbbHcc_tags_H_dR_all_stack_1 = new TH1D("VbbHcc_tags_H_dR_all_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(2,23363.13);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(3,7132962);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(4,9361871);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(5,7590929);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(6,7653313);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(7,7752914);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(8,8464440);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(9,8789537);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(10,9259805);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(11,1.055574e+07);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(12,1.172803e+07);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(13,1.33563e+07);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(14,1.588908e+07);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(15,1.719671e+07);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(16,1.917037e+07);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(17,1.270978e+07);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(18,9250491);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(19,7788292);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(20,6477941);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(21,4438001);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(22,3589258);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(23,2538376);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(24,1634109);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(25,1143303);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(26,740971.9);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(27,319985.3);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(28,71714.49);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(29,5324.057);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(2,18338.74);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(3,187440.7);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(4,267860);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(5,226889.2);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(6,245350.4);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(7,244912.8);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(8,255816.7);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(9,264728.8);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(10,259727.5);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(11,291125.7);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(12,305940.9);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(13,335491.7);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(14,367370.9);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(15,371881);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(16,411671.9);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(17,327911.5);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(18,271958.1);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(19,281773);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(20,246754.1);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(21,189916);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(22,179781.4);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(23,145376.1);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(24,113168.2);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(25,103997.4);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(26,111982.7);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(27,61717.99);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(28,18369.4);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(29,2080.264);
   VbbHcc_tags_H_dR_all_stack_1->SetEntries(1674378);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_2 = new TH1D("VbbHcc_tags_H_dR_all_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(2,166.587);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(3,199438.7);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(4,356782.6);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(5,434325);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(6,522005.9);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(7,570198.2);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(8,587352.6);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(9,594047.4);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(10,606543.5);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(11,633197.4);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(12,674600.6);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(13,726968.9);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(14,785943.3);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(15,843542.4);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(16,834705.4);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(17,479885.2);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(18,308626.3);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(19,209043.4);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(20,143026.1);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(21,96799.6);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(22,64218.66);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(23,41255.21);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(24,25048.83);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(25,13598.43);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(26,6713.877);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(27,2813.113);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(28,776.8899);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(29,54.35728);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(2,5.185432);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(3,130.4893);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(4,173.4467);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(5,191.7729);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(6,209.7366);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(7,218.9664);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(8,223.3342);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(9,224.0798);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(10,227.221);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(11,232.1038);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(12,239.5223);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(13,249.2111);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(14,259.3286);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(15,268.8625);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(16,267.457);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(17,202.5777);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(18,162.1405);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(19,132.4317);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(20,108.993);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(21,88.64106);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(22,72.56933);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(23,57.65293);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(24,44.86239);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(25,32.43812);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(26,23.2157);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(27,14.65822);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(28,7.977206);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(29,1.984852);
   VbbHcc_tags_H_dR_all_stack_2->SetEntries(1.351921e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   H_dR_tags_all->Modified();
   H_dR_tags_all->cd();
   H_dR_tags_all->SetSelected(H_dR_tags_all);
}
