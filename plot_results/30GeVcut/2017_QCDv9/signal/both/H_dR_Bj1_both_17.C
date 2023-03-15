#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_both_17()
{
//=========Macro generated from canvas: H_dR_Bj1_both_17/H_dR_Bj1_both_17
//=========  (Tue Feb 14 15:57:11 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_both_17 = new TCanvas("H_dR_Bj1_both_17", "H_dR_Bj1_both_17",0,0,600,600);
   H_dR_Bj1_both_17->SetHighLightColor(2);
   H_dR_Bj1_both_17->Range(-1.310117,-0.6672591,7.029799,4.893234);
   H_dR_Bj1_both_17->SetFillColor(0);
   H_dR_Bj1_both_17->SetFillStyle(4000);
   H_dR_Bj1_both_17->SetBorderMode(0);
   H_dR_Bj1_both_17->SetBorderSize(2);
   H_dR_Bj1_both_17->SetLeftMargin(0.15709);
   H_dR_Bj1_both_17->SetRightMargin(0.1234783);
   H_dR_Bj1_both_17->SetBottomMargin(0.12);
   H_dR_Bj1_both_17->SetFrameFillStyle(1000);
   H_dR_Bj1_both_17->SetFrameBorderMode(0);
   H_dR_Bj1_both_17->SetFrameFillStyle(1000);
   H_dR_Bj1_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(4.337184);
   
   TH1F *st_stack_174 = new TH1F("st_stack_174","",30,0,6);
   st_stack_174->SetMinimum(0);
   st_stack_174->SetMaximum(4.337184);
   st_stack_174->SetDirectory(0);
   st_stack_174->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_174->SetLineColor(ci);
   st_stack_174->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_174->GetXaxis()->SetRange(1,30);
   st_stack_174->GetXaxis()->SetLabelFont(42);
   st_stack_174->GetXaxis()->SetTitleOffset(1);
   st_stack_174->GetXaxis()->SetTitleFont(42);
   st_stack_174->GetYaxis()->SetTitle("Events/0.2");
   st_stack_174->GetYaxis()->SetLabelFont(42);
   st_stack_174->GetYaxis()->SetTitleSize(0.037);
   st_stack_174->GetYaxis()->SetTitleFont(42);
   st_stack_174->GetZaxis()->SetLabelFont(42);
   st_stack_174->GetZaxis()->SetTitleOffset(1);
   st_stack_174->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_174);
   
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(1,0.4582728);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(2,1.796746);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(3,2.122277);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(4,2.035363);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(5,1.686128);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(6,1.524942);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(7,1.137781);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(8,0.9212864);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(9,0.7332365);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(10,0.635261);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(11,0.5404459);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(12,0.4961989);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(13,0.4187666);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(14,0.3792603);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(15,0.3444947);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(16,0.295507);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(17,0.1833091);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(18,0.1027163);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(19,0.05688904);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(20,0.03634578);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(21,0.02370377);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(22,0.007901256);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(23,0.009481507);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(24,0.01106176);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(25,0.009481507);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(26,0.001580251);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(27,0.004740753);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(28,0.001580251);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(29,0.003160502);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(1,0.02691071);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(2,0.05328517);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(3,0.05791141);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(4,0.05671319);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(5,0.05161885);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(6,0.04908963);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(7,0.04240259);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(8,0.03815578);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(9,0.03403965);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(10,0.03168394);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(11,0.02922397);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(12,0.02800212);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(13,0.02572462);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(14,0.02448115);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(15,0.02333213);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(16,0.02160961);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(17,0.01701983);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(18,0.01274039);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(19,0.009481507);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(20,0.007578618);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(21,0.006120286);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(22,0.003533549);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(23,0.003870809);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(24,0.004180952);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(25,0.003870809);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(26,0.001580251);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(27,0.002737075);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(28,0.001580251);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(29,0.002234813);
   VbbHcc_both_H_dR_Bj1_stack_1->SetEntries(10111);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(1,0.1685758);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(2,0.6410863);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(3,0.769179);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(4,0.6664142);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(5,0.5337541);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(6,0.4307817);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(7,0.3367364);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(8,0.2605451);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(9,0.2034535);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(10,0.1604792);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(11,0.1343209);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(12,0.1220721);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(13,0.1143907);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(14,0.09819747);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(15,0.09238452);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(16,0.08304226);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(17,0.04297437);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(18,0.02885719);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(19,0.01702366);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(20,0.01370197);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(21,0.006850987);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(22,0.007266198);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(23,0.003529296);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(24,0.002491268);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(25,0.002283662);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(26,0.001038028);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(27,0.0004152113);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(28,0.0002076057);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(29,0.0002076057);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(31,0.0002076057);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(1,0.005915851);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(2,0.0115366);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(3,0.01263669);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(4,0.01176228);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(5,0.01052665);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(6,0.009456888);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(7,0.008361123);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(8,0.007354634);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(9,0.006499085);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(10,0.005772035);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(11,0.005280698);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(12,0.00503417);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(13,0.004873208);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(14,0.004515125);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(15,0.004379446);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(16,0.004152113);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(17,0.002986925);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(18,0.002447635);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(19,0.001879949);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(20,0.001686596);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(21,0.001192604);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(22,0.001228212);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(23,0.00085598);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(24,0.0007191671);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(25,0.0006885501);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(26,0.0004642204);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(27,0.0002935987);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(28,0.0002076057);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(29,0.0002076057);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(31,0.0002076057);
   VbbHcc_both_H_dR_Bj1_stack_2->SetEntries(23807);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_both_17->Modified();
   H_dR_Bj1_both_17->cd();
   H_dR_Bj1_both_17->SetSelected(H_dR_Bj1_both_17);
}
