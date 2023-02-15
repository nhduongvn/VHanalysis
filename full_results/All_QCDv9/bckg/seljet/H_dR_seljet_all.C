#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_seljet_all()
{
//=========Macro generated from canvas: H_dR_seljet_all/H_dR_seljet_all
//=========  (Tue Feb 14 16:10:13 2023) by ROOT version 6.26/06
   TCanvas *H_dR_seljet_all = new TCanvas("H_dR_seljet_all", "H_dR_seljet_all",0,0,600,600);
   H_dR_seljet_all->SetHighLightColor(2);
   H_dR_seljet_all->Range(-1.353788,-2.087699e+09,7.264125,1.53098e+10);
   H_dR_seljet_all->SetFillColor(0);
   H_dR_seljet_all->SetFillStyle(4000);
   H_dR_seljet_all->SetBorderMode(0);
   H_dR_seljet_all->SetBorderSize(2);
   H_dR_seljet_all->SetLeftMargin(0.15709);
   H_dR_seljet_all->SetRightMargin(0.1234783);
   H_dR_seljet_all->SetBottomMargin(0.12);
   H_dR_seljet_all->SetFrameFillStyle(1000);
   H_dR_seljet_all->SetFrameBorderMode(0);
   H_dR_seljet_all->SetFrameFillStyle(1000);
   H_dR_seljet_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.357005e+10);
   
   TH1F *st_stack_280 = new TH1F("st_stack_280","",30,0,6);
   st_stack_280->SetMinimum(0);
   st_stack_280->SetMaximum(1.357005e+10);
   st_stack_280->SetDirectory(0);
   st_stack_280->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_280->SetLineColor(ci);
   st_stack_280->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_280->GetXaxis()->SetRange(1,31);
   st_stack_280->GetXaxis()->SetLabelFont(42);
   st_stack_280->GetXaxis()->SetTitleOffset(1);
   st_stack_280->GetXaxis()->SetTitleFont(42);
   st_stack_280->GetYaxis()->SetTitle("Events/0.2");
   st_stack_280->GetYaxis()->SetLabelFont(42);
   st_stack_280->GetYaxis()->SetTitleSize(0.037);
   st_stack_280->GetYaxis()->SetTitleFont(42);
   st_stack_280->GetZaxis()->SetLabelFont(42);
   st_stack_280->GetZaxis()->SetTitleOffset(1);
   st_stack_280->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_280);
   
   
   TH1D *VbbHcc_seljet_H_dR_all_stack_1 = new TH1D("VbbHcc_seljet_H_dR_all_stack_1","",30,0,6);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(2,534075);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(3,4.162961e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(4,6.388989e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(5,5.515784e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(6,5.765125e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(7,6.577588e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(8,7.874013e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(9,1.004044e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(10,1.341576e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(11,1.870711e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(12,2.664861e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(13,3.837024e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(14,5.474131e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(15,7.532034e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(16,9.03585e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(17,5.724238e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(18,3.994443e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(19,2.913815e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(20,2.144754e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(21,1.55503e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(22,1.099047e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(23,7.524352e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(24,4.887394e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(25,2.935455e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(26,1.537646e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(27,6.792873e+07);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(28,1.916834e+07);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(29,1242893);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(2,65657.22);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(3,2241206);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(4,2617585);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(5,2450640);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(6,2511538);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(7,2884241);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(8,2918774);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(9,3195129);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(10,3550796);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(11,4095872);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(12,4769434);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(13,5583970);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(14,6526175);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(15,7669931);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(16,8246707);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(17,6540357);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(18,5504349);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(19,4845756);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(20,4168838);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(21,3663797);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(22,3036965);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(23,2480880);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(24,2014088);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(25,1604098);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(26,1159474);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(27,776012.7);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(28,410911.5);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(29,117624.4);
   VbbHcc_seljet_H_dR_all_stack_1->SetEntries(2.02983e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_seljet_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_seljet_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_seljet_H_dR_all_stack_2 = new TH1D("VbbHcc_seljet_H_dR_all_stack_2","",30,0,6);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(2,438.6236);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(3,514855.2);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(4,1161455);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(5,1579424);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(6,1901414);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(7,2104235);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(8,2293262);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(9,2595512);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(10,3091558);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(11,3843363);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(12,4912644);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(13,6345753);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(14,8116656);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(15,1.006374e+07);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(16,1.084809e+07);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(17,5594498);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(18,3206964);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(19,1955842);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(20,1204641);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(21,736590.5);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(22,443081.5);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(23,259033);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(24,144317);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(25,74570.89);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(26,34152.63);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(27,12898.05);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(28,3138.803);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(29,183.1301);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(2,5.8475);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(3,200.9284);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(4,302.9655);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(5,353.2838);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(6,388.1611);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(7,408.4871);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(8,426.8548);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(9,456.1172);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(10,498.6743);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(11,557.1075);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(12,631.7507);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(13,719.971);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(14,816.3073);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(15,911.0404);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(16,947.2161);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(17,679.7157);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(18,513.2694);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(19,400.0792);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(20,313.8419);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(21,244.248);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(22,188.5233);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(23,143.8255);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(24,106.8324);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(25,76.69704);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(26,51.56936);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(27,31.61981);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(28,15.41093);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(29,3.834481);
   VbbHcc_seljet_H_dR_all_stack_2->SetEntries(1.051192e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_seljet_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_seljet_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_H_dR_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_H_dR_all_stack_1","QCD","F");

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
   H_dR_seljet_all->Modified();
   H_dR_seljet_all->cd();
   H_dR_seljet_all->SetSelected(H_dR_seljet_all);
}
