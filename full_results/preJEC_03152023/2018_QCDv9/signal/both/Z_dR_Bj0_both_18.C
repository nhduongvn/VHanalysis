#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_both_18()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_18/Z_dR_Bj0_both_18
//=========  (Thu Mar  9 13:09:07 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_both_18 = new TCanvas("Z_dR_Bj0_both_18", "Z_dR_Bj0_both_18",0,0,600,600);
   Z_dR_Bj0_both_18->SetHighLightColor(2);
   Z_dR_Bj0_both_18->Range(-1.310117,-0.449369,7.029799,3.295373);
   Z_dR_Bj0_both_18->SetFillColor(0);
   Z_dR_Bj0_both_18->SetFillStyle(4000);
   Z_dR_Bj0_both_18->SetBorderMode(0);
   Z_dR_Bj0_both_18->SetBorderSize(2);
   Z_dR_Bj0_both_18->SetLeftMargin(0.15709);
   Z_dR_Bj0_both_18->SetRightMargin(0.1234783);
   Z_dR_Bj0_both_18->SetBottomMargin(0.12);
   Z_dR_Bj0_both_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_18->SetFrameBorderMode(0);
   Z_dR_Bj0_both_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.920898);
   
   TH1F *st_stack_179 = new TH1F("st_stack_179","",30,0,6);
   st_stack_179->SetMinimum(0);
   st_stack_179->SetMaximum(2.920898);
   st_stack_179->SetDirectory(0);
   st_stack_179->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_179->SetLineColor(ci);
   st_stack_179->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_179->GetXaxis()->SetRange(1,30);
   st_stack_179->GetXaxis()->SetLabelFont(42);
   st_stack_179->GetXaxis()->SetTitleOffset(1);
   st_stack_179->GetXaxis()->SetTitleFont(42);
   st_stack_179->GetYaxis()->SetTitle("Event/0.2");
   st_stack_179->GetYaxis()->SetLabelFont(42);
   st_stack_179->GetYaxis()->SetTitleSize(0.037);
   st_stack_179->GetYaxis()->SetTitleFont(42);
   st_stack_179->GetZaxis()->SetLabelFont(42);
   st_stack_179->GetZaxis()->SetTitleOffset(1);
   st_stack_179->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_179);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(1,0.4232917);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(2,1.670409);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(3,1.572551);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(4,1.008163);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(5,0.6417649);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(6,0.3868795);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(7,0.2799187);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(8,0.2116459);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(9,0.1979913);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(10,0.1388215);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(11,0.1228911);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(12,0.1160639);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(13,0.1092366);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(14,0.1160639);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(15,0.1069608);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(16,0.095582);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(17,0.06827286);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(18,0.03868795);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(19,0.03641219);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(20,0.004551524);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(21,0.004551524);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(22,0.004551524);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(24,0.002275762);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(31,0.002275762);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(1,0.03103725);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(2,0.06165593);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(3,0.05982268);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(4,0.04789925);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(5,0.03821654);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(6,0.0296723);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(7,0.02523942);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(8,0.02194665);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(9,0.02122689);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(10,0.01777427);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(11,0.01672337);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(12,0.01625219);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(13,0.01576694);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(14,0.01625219);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(15,0.01560184);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(16,0.01474862);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(17,0.01246486);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(18,0.009383207);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(19,0.009103048);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(20,0.003218413);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(21,0.003218413);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(22,0.003218413);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(24,0.002275762);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(31,0.002275762);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetEntries(3234);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(1,0.1546229);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(2,0.7539365);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(3,0.7824039);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(4,0.4665656);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(5,0.2349309);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(6,0.1198627);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(7,0.09439189);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(8,0.08030802);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(9,0.06532518);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(10,0.05513685);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(11,0.04974303);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(12,0.04285092);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(13,0.04225161);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(14,0.03895538);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(15,0.03925504);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(16,0.03086465);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(17,0.02067632);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(18,0.0110873);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(19,0.008090734);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(20,0.003296225);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(21,0.001498284);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(22,0.001797941);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(23,0.001498284);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(24,0.0002996568);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(25,0.0008989704);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(26,0.0005993136);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(28,0.0002996568);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(29,0.0005993136);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(1,0.006806894);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(2,0.01503071);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(3,0.01531185);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(4,0.01182411);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(5,0.00839039);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(6,0.005993136);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(7,0.005318381);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(8,0.004905593);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(9,0.00442438);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(10,0.004064743);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(11,0.003860808);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(12,0.003583374);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(13,0.003558227);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(14,0.003416613);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(15,0.003429729);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(16,0.003041184);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(17,0.002489136);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(18,0.001822741);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(19,0.001557062);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(20,0.0009938492);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(21,0.000670053);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(22,0.0007340063);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(23,0.000670053);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(24,0.0002996568);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(25,0.0005190208);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(26,0.0004237787);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(28,0.0002996568);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(29,0.0004237787);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetEntries(10352);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_1","ZHcc","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_both_18->Modified();
   Z_dR_Bj0_both_18->cd();
   Z_dR_Bj0_both_18->SetSelected(Z_dR_Bj0_both_18);
}
