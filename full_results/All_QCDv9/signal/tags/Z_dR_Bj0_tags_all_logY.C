#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_tags_all_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_all/Z_dR_Bj0_tags_all
//=========  (Mon Dec 19 11:10:36 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_tags_all = new TCanvas("Z_dR_Bj0_tags_all", "Z_dR_Bj0_tags_all",0,0,600,600);
   Z_dR_Bj0_tags_all->SetHighLightColor(2);
   Z_dR_Bj0_tags_all->Range(-1.310117,0.3649405,7.029799,3.282941);
   Z_dR_Bj0_tags_all->SetFillColor(0);
   Z_dR_Bj0_tags_all->SetFillStyle(4000);
   Z_dR_Bj0_tags_all->SetBorderMode(0);
   Z_dR_Bj0_tags_all->SetBorderSize(2);
   Z_dR_Bj0_tags_all->SetLogy();
   Z_dR_Bj0_tags_all->SetLeftMargin(0.15709);
   Z_dR_Bj0_tags_all->SetRightMargin(0.1234783);
   Z_dR_Bj0_tags_all->SetBottomMargin(0.12);
   Z_dR_Bj0_tags_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_all->SetFrameBorderMode(0);
   Z_dR_Bj0_tags_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(714.755);
   
   TH1F *st_stack_52 = new TH1F("st_stack_52","",30,0,6);
   st_stack_52->SetMinimum(5.189202);
   st_stack_52->SetMaximum(979.8086);
   st_stack_52->SetDirectory(0);
   st_stack_52->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_52->SetLineColor(ci);
   st_stack_52->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_52->GetXaxis()->SetRange(1,30);
   st_stack_52->GetXaxis()->SetLabelFont(42);
   st_stack_52->GetXaxis()->SetTitleOffset(1);
   st_stack_52->GetXaxis()->SetTitleFont(42);
   st_stack_52->GetYaxis()->SetTitle("Events/0.2");
   st_stack_52->GetYaxis()->SetLabelFont(42);
   st_stack_52->GetYaxis()->SetTitleSize(0.037);
   st_stack_52->GetYaxis()->SetTitleFont(42);
   st_stack_52->GetZaxis()->SetLabelFont(42);
   st_stack_52->GetZaxis()->SetTitleOffset(1);
   st_stack_52->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_52);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(1,1.208862);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(2,4.066185);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(3,5.196483);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(4,4.543527);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(5,3.544658);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(6,2.702874);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(7,2.024747);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(8,1.442432);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(9,1.057654);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(10,0.9314997);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(11,0.7734854);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(12,0.5955153);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(13,0.528122);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(14,0.5060355);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(15,0.4354064);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(16,0.4104246);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(17,0.245641);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(18,0.1662329);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(19,0.1221029);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(20,0.06697648);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(21,0.0380159);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(22,0.02601939);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(23,0.006087491);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(24,0.01228937);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(25,0.006938226);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(26,0.004468371);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(27,0.001440646);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(1,0.04777299);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(2,0.08760969);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(3,0.09894526);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(4,0.09268901);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(5,0.08165826);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(6,0.07167708);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(7,0.06212306);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(8,0.05212397);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(9,0.04443907);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(10,0.04184513);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(11,0.03803251);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(12,0.03373851);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(13,0.0315704);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(14,0.03072289);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(15,0.02866821);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(16,0.02792623);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(17,0.02120462);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(18,0.01734105);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(19,0.01523498);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(20,0.01125341);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(21,0.008288584);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(22,0.006861733);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(23,0.003587763);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(24,0.004743834);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(25,0.003537144);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(26,0.002582584);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(27,0.001440646);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetEntries(16994);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(1,0.513901);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(2,1.820309);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(3,1.951067);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(4,1.455746);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(5,0.9586068);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(6,0.5821776);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(7,0.3930116);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(8,0.2935592);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(9,0.2446735);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(10,0.2011247);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(11,0.1727208);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(12,0.1564379);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(13,0.1388244);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(14,0.1297185);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(15,0.1266613);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(16,0.1148596);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(17,0.05875402);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(18,0.04066317);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(19,0.02876542);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(20,0.01989162);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(21,0.01153905);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(22,0.00932536);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(23,0.003920702);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(24,0.003354654);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(25,0.001489891);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(26,0.001629187);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(27,0.0007449456);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(28,0.0003600719);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(29,0.000180036);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(30,0.0003441339);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(31,0.0005241698);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(1,0.01163486);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(2,0.0220932);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(3,0.02279404);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(4,0.01972799);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(5,0.01597325);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(6,0.01241707);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(7,0.0101936);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(8,0.008798662);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(9,0.008017199);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(10,0.007311854);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(11,0.006691696);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(12,0.006452322);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(13,0.006055436);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(14,0.005797125);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(15,0.005754801);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(16,0.005494718);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(17,0.00390223);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(18,0.003288393);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(19,0.00276189);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(20,0.002306361);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(21,0.001685241);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(22,0.001597014);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(23,0.0009882944);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(24,0.000888176);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(25,0.0006317959);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(26,0.0006443989);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(27,0.0004467472);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(28,0.0002546093);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(29,0.000180036);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(30,0.0003441339);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(31,0.0003883826);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetEntries(38313);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_1","ZHcc","F");

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
   Z_dR_Bj0_tags_all->Modified();
   Z_dR_Bj0_tags_all->cd();
   Z_dR_Bj0_tags_all->SetSelected(Z_dR_Bj0_tags_all);
}
