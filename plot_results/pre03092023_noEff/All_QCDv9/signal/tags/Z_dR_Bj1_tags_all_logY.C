#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_tags_all_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_tags_all/Z_dR_Bj1_tags_all
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_tags_all = new TCanvas("Z_dR_Bj1_tags_all", "Z_dR_Bj1_tags_all",0,0,600,600);
   Z_dR_Bj1_tags_all->SetHighLightColor(2);
   Z_dR_Bj1_tags_all->Range(-1.310117,-2.932259,7.029799,0.9138946);
   Z_dR_Bj1_tags_all->SetFillColor(0);
   Z_dR_Bj1_tags_all->SetFillStyle(4000);
   Z_dR_Bj1_tags_all->SetBorderMode(0);
   Z_dR_Bj1_tags_all->SetBorderSize(2);
   Z_dR_Bj1_tags_all->SetLogy();
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
   st->SetMinimum(10);
   
   TH1F *st_stack_56 = new TH1F("st_stack_56","",30,0,6);
   st_stack_56->SetMinimum(12.75122);
   st_stack_56->SetMaximum(3.382822);
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
   st_stack_56->GetYaxis()->SetTitle("Event/0.2");
   st_stack_56->GetYaxis()->SetLabelFont(42);
   st_stack_56->GetYaxis()->SetTitleSize(0.037);
   st_stack_56->GetYaxis()->SetTitleFont(42);
   st_stack_56->GetZaxis()->SetLabelFont(42);
   st_stack_56->GetZaxis()->SetTitleOffset(1);
   st_stack_56->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_56);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(1,0.6286521);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(2,2.360879);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(3,2.512717);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(4,1.834793);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(5,1.078338);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(6,0.5930141);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(7,0.4398914);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(8,0.3861392);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(9,0.2689884);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(10,0.2252885);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(11,0.2097173);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(12,0.1872605);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(13,0.1848076);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(14,0.1639461);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(15,0.152589);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(16,0.1459891);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(17,0.06673286);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(18,0.06132798);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(19,0.03216162);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(20,0.007042768);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(21,0.006742735);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(22,0.008480894);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(23,0.007066566);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(24,0.007533199);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(25,0.003042852);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(26,0.001114295);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(28,0.001604726);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(1,0.03060007);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(2,0.05986273);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(3,0.06168115);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(4,0.05278119);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(5,0.04047124);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(6,0.02978618);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(7,0.02572082);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(8,0.02443211);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(9,0.01991087);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(10,0.018584);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(11,0.01782699);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(12,0.01676257);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(13,0.01679882);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(14,0.01577097);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(15,0.01521043);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(16,0.01475539);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(17,0.009975721);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(18,0.009669336);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(19,0.006844582);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(20,0.003195112);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(21,0.003383012);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(22,0.003548885);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(23,0.003548092);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(24,0.003397386);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(25,0.002227327);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(26,0.001114295);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(28,0.001604726);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetEntries(8003);

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
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(1,0.2433101);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(2,1.099241);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(3,1.189634);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(4,0.7777142);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(5,0.3726545);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(6,0.2068846);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(7,0.1513193);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(8,0.1256771);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(9,0.1070245);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(10,0.0941897);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(11,0.08583982);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(12,0.07917911);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(13,0.0668351);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(14,0.05894211);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(15,0.05437433);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(16,0.05033354);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(17,0.02937698);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(18,0.01724099);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(19,0.01215303);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(20,0.006689867);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(21,0.004706928);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(22,0.001699255);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(23,0.001764163);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(24,0.002186762);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(25,0.0008617705);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(26,0.0001463906);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(27,0.0002112994);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(28,0.0002519217);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(29,0.0001463906);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(1,0.006972177);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(2,0.01481007);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(3,0.01535584);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(4,0.0124153);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(5,0.008612494);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(6,0.006431377);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(7,0.005467767);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(8,0.005018547);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(9,0.004595678);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(10,0.004303923);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(11,0.004126903);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(12,0.004025727);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(13,0.003644706);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(14,0.00342738);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(15,0.003281444);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(16,0.003162903);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(17,0.002428014);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(18,0.001859006);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(19,0.001528234);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(20,0.001153995);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(21,0.0009445863);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(22,0.0005502462);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(23,0.0005709536);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(24,0.0006444245);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(25,0.0003918998);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(26,0.0001463906);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(27,0.0002112994);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(28,0.0002519217);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(29,0.0001463906);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetEntries(25459);

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
