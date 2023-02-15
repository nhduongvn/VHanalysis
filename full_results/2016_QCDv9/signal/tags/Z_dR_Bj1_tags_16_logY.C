#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_tags_16_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_tags_16/Z_dR_Bj1_tags_16
//=========  (Tue Feb 14 16:07:55 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_tags_16 = new TCanvas("Z_dR_Bj1_tags_16", "Z_dR_Bj1_tags_16",0,0,600,600);
   Z_dR_Bj1_tags_16->SetHighLightColor(2);
   Z_dR_Bj1_tags_16->Range(-1.310117,0.4998855,7.029799,2.739134);
   Z_dR_Bj1_tags_16->SetFillColor(0);
   Z_dR_Bj1_tags_16->SetFillStyle(4000);
   Z_dR_Bj1_tags_16->SetBorderMode(0);
   Z_dR_Bj1_tags_16->SetBorderSize(2);
   Z_dR_Bj1_tags_16->SetLogy();
   Z_dR_Bj1_tags_16->SetLeftMargin(0.15709);
   Z_dR_Bj1_tags_16->SetRightMargin(0.1234783);
   Z_dR_Bj1_tags_16->SetBottomMargin(0.12);
   Z_dR_Bj1_tags_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_16->SetFrameBorderMode(0);
   Z_dR_Bj1_tags_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(255.5587);
   
   TH1F *st_stack_53 = new TH1F("st_stack_53","",30,0,6);
   st_stack_53->SetMinimum(5.869422);
   st_stack_53->SetMaximum(327.4981);
   st_stack_53->SetDirectory(0);
   st_stack_53->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_53->SetLineColor(ci);
   st_stack_53->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_53->GetXaxis()->SetRange(1,30);
   st_stack_53->GetXaxis()->SetLabelFont(42);
   st_stack_53->GetXaxis()->SetTitleOffset(1);
   st_stack_53->GetXaxis()->SetTitleFont(42);
   st_stack_53->GetYaxis()->SetTitle("Events/0.2");
   st_stack_53->GetYaxis()->SetLabelFont(42);
   st_stack_53->GetYaxis()->SetTitleSize(0.037);
   st_stack_53->GetYaxis()->SetTitleFont(42);
   st_stack_53->GetZaxis()->SetLabelFont(42);
   st_stack_53->GetZaxis()->SetTitleOffset(1);
   st_stack_53->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_53);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(1,0.377431);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(2,1.485109);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(3,1.89536);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(4,1.591774);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(5,1.137763);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(6,0.8396473);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(7,0.5880266);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(8,0.4950363);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(9,0.355551);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(10,0.3172609);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(11,0.2160656);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(12,0.2051256);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(13,0.1449554);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(14,0.1422204);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(15,0.1613654);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(16,0.1476904);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(17,0.07931522);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(18,0.05743516);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(19,0.01367504);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(20,0.005470015);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(21,0.01641004);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(22,0.005470015);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(23,0.01367504);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(24,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(25,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(1,0.03212906);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(2,0.06373213);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(3,0.07199878);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(4,0.06598117);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(5,0.05578343);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(6,0.0479212);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(7,0.04010308);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(8,0.03679576);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(9,0.03118388);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(10,0.02945693);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(11,0.02430928);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(12,0.02368586);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(13,0.01991115);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(14,0.01972242);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(15,0.02100799);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(16,0.02009812);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(17,0.01472847);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(18,0.01253338);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(19,0.006115663);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(20,0.003867885);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(21,0.006699373);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(22,0.003867885);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(23,0.006115663);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(24,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(25,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetEntries(3765);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(1,0.1672004);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(2,0.6227144);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(3,0.6602273);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(4,0.4951705);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(5,0.3340436);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(6,0.2111441);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(7,0.1339747);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(8,0.1028926);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(9,0.07395403);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(10,0.06323605);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(11,0.05251808);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(12,0.06180699);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(13,0.05073175);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(14,0.04037104);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(15,0.03929924);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(16,0.03572658);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(17,0.02107868);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(18,0.01107524);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(19,0.006788051);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(20,0.004644456);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(21,0.003215393);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(22,0.001429063);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(23,0.0007145317);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(24,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(25,0.0007145317);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(28,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(1,0.007728842);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(2,0.01491558);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(3,0.01535828);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(4,0.01330066);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(5,0.01092439);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(6,0.008685308);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(7,0.006918423);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(8,0.006063002);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(9,0.00514016);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(10,0.004753113);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(11,0.004331618);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(12,0.004699099);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(13,0.004257314);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(14,0.003797788);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(15,0.003747036);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(16,0.003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(17,0.002744211);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(18,0.001989172);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(19,0.001557286);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(20,0.00128814);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(21,0.001071798);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(22,0.0007145317);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(23,0.0005052502);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(24,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(25,0.0005052502);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(28,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetEntries(8944);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_tags_16->Modified();
   Z_dR_Bj1_tags_16->cd();
   Z_dR_Bj1_tags_16->SetSelected(Z_dR_Bj1_tags_16);
}
