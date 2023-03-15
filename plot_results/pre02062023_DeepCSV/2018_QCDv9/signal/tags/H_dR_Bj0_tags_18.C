#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_tags_18()
{
//=========Macro generated from canvas: H_dR_Bj0_tags_18/H_dR_Bj0_tags_18
//=========  (Wed Jan 18 11:40:23 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_tags_18 = new TCanvas("H_dR_Bj0_tags_18", "H_dR_Bj0_tags_18",0,0,600,600);
   H_dR_Bj0_tags_18->SetHighLightColor(2);
   H_dR_Bj0_tags_18->Range(-1.310117,-0.6154918,7.029799,4.513606);
   H_dR_Bj0_tags_18->SetFillColor(0);
   H_dR_Bj0_tags_18->SetFillStyle(4000);
   H_dR_Bj0_tags_18->SetBorderMode(0);
   H_dR_Bj0_tags_18->SetBorderSize(2);
   H_dR_Bj0_tags_18->SetLeftMargin(0.15709);
   H_dR_Bj0_tags_18->SetRightMargin(0.1234783);
   H_dR_Bj0_tags_18->SetBottomMargin(0.12);
   H_dR_Bj0_tags_18->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_18->SetFrameBorderMode(0);
   H_dR_Bj0_tags_18->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(4.000697);
   
   TH1F *st_stack_43 = new TH1F("st_stack_43","",30,0,6);
   st_stack_43->SetMinimum(0);
   st_stack_43->SetMaximum(4.000697);
   st_stack_43->SetDirectory(0);
   st_stack_43->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_43->SetLineColor(ci);
   st_stack_43->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_43->GetXaxis()->SetRange(1,30);
   st_stack_43->GetXaxis()->SetLabelFont(42);
   st_stack_43->GetXaxis()->SetTitleOffset(1);
   st_stack_43->GetXaxis()->SetTitleFont(42);
   st_stack_43->GetYaxis()->SetTitle("Events/0.2");
   st_stack_43->GetYaxis()->SetLabelFont(42);
   st_stack_43->GetYaxis()->SetTitleSize(0.037);
   st_stack_43->GetYaxis()->SetTitleFont(42);
   st_stack_43->GetZaxis()->SetLabelFont(42);
   st_stack_43->GetZaxis()->SetTitleOffset(1);
   st_stack_43->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_43);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(1,0.3508368);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(2,1.570633);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(3,1.960968);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(4,1.823886);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(5,1.55437);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(6,1.263942);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(7,0.9711905);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(8,0.8712834);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(9,0.6644988);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(10,0.4321565);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(11,0.4321565);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(12,0.3647773);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(13,0.3252791);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(14,0.2950746);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(15,0.269517);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(16,0.2393125);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(17,0.1417288);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(18,0.09293689);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(19,0.07202609);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(20,0.04646845);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(21,0.03020449);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(22,0.02323422);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(23,0.01394053);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(24,0.002323422);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(25,0.002323422);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(26,0.006970267);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(28,0.002323422);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(31,0.002323422);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(1,0.02855069);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(2,0.06040898);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(3,0.06749932);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(4,0.0650973);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(5,0.0600954);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(6,0.05419105);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(7,0.04750248);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(8,0.04499288);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(9,0.03929264);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(10,0.03168726);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(11,0.03168726);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(12,0.0291124);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(13,0.0274911);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(14,0.02618364);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(15,0.02502402);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(16,0.02358016);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(17,0.01814651);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(18,0.01469461);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(19,0.01293627);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(20,0.01039066);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(21,0.008377218);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(22,0.007347306);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(23,0.005691199);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(24,0.002323422);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(25,0.002323422);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(26,0.004024285);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(28,0.002323422);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(31,0.002323422);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetEntries(5951);

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
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(1,0.1613988);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(2,0.5974164);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(3,0.7061627);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(4,0.5843393);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(5,0.4212198);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(6,0.3541137);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(7,0.2591328);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(8,0.2092334);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(9,0.1603664);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(10,0.1318033);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(11,0.1090904);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(12,0.09876642);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(13,0.08775413);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(14,0.08362453);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(15,0.07467705);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(16,0.0650413);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(17,0.04439327);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(18,0.02202457);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(19,0.0244335);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(20,0.01273295);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(21,0.008603347);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(22,0.007226811);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(23,0.005850276);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(24,0.003441339);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(25,0.001720669);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(28,0.0006882677);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(29,0.0003441339);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(30,0.0003441339);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(31,0.0003441339);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(1,0.007452703);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(2,0.01433845);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(3,0.01558892);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(4,0.01418065);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(5,0.01203977);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(6,0.01103914);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(7,0.009443324);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(8,0.008485534);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(9,0.007428829);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(10,0.006734832);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(11,0.006127129);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(12,0.005829997);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(13,0.005495377);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(14,0.005364516);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(15,0.005069408);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(16,0.004731058);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(17,0.003908609);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(18,0.002753071);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(19,0.002899723);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(20,0.002093285);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(21,0.001720669);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(22,0.001577019);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(23,0.0014189);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(24,0.001088247);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(25,0.0007695067);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(28,0.0004866788);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(29,0.0003441339);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(30,0.0003441339);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(31,0.0003441339);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetEntries(12310);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_tags_18->Modified();
   H_dR_Bj0_tags_18->cd();
   H_dR_Bj0_tags_18->SetSelected(H_dR_Bj0_tags_18);
}
