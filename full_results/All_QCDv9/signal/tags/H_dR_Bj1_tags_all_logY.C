#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_tags_all_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_tags_all/H_dR_Bj1_tags_all
//=========  (Mon Dec 19 11:10:36 2022) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_tags_all = new TCanvas("H_dR_Bj1_tags_all", "H_dR_Bj1_tags_all",0,0,600,600);
   H_dR_Bj1_tags_all->SetHighLightColor(2);
   H_dR_Bj1_tags_all->Range(-1.310117,0.3978608,7.029799,3.14764);
   H_dR_Bj1_tags_all->SetFillColor(0);
   H_dR_Bj1_tags_all->SetFillStyle(4000);
   H_dR_Bj1_tags_all->SetBorderMode(0);
   H_dR_Bj1_tags_all->SetBorderSize(2);
   H_dR_Bj1_tags_all->SetLogy();
   H_dR_Bj1_tags_all->SetLeftMargin(0.15709);
   H_dR_Bj1_tags_all->SetRightMargin(0.1234783);
   H_dR_Bj1_tags_all->SetBottomMargin(0.12);
   H_dR_Bj1_tags_all->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_all->SetFrameBorderMode(0);
   H_dR_Bj1_tags_all->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(553.0855);
   
   TH1F *st_stack_48 = new TH1F("st_stack_48","",30,0,6);
   st_stack_48->SetMinimum(5.343604);
   st_stack_48->SetMaximum(745.8681);
   st_stack_48->SetDirectory(0);
   st_stack_48->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_48->SetLineColor(ci);
   st_stack_48->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_48->GetXaxis()->SetRange(1,30);
   st_stack_48->GetXaxis()->SetLabelFont(42);
   st_stack_48->GetXaxis()->SetTitleOffset(1);
   st_stack_48->GetXaxis()->SetTitleFont(42);
   st_stack_48->GetYaxis()->SetTitle("Events/0.2");
   st_stack_48->GetYaxis()->SetLabelFont(42);
   st_stack_48->GetYaxis()->SetTitleSize(0.037);
   st_stack_48->GetYaxis()->SetTitleFont(42);
   st_stack_48->GetZaxis()->SetLabelFont(42);
   st_stack_48->GetZaxis()->SetTitleOffset(1);
   st_stack_48->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_48);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(1,0.7706526);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(2,2.962813);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(3,4.099629);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(4,3.879772);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(5,3.244754);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(6,2.809524);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(7,2.271106);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(8,1.912522);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(9,1.483095);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(10,1.303131);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(11,1.1041);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(12,0.8852738);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(13,0.8864312);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(14,0.8177715);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(15,0.6470927);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(16,0.6347069);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(17,0.3247005);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(18,0.244507);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(19,0.1553576);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(20,0.08793759);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(21,0.05815831);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(22,0.0192276);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(23,0.02690217);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(24,0.01661131);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(25,0.00996595);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(26,0.004614803);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(27,0.002323422);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(28,0.001440646);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(1,0.03849133);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(2,0.07470333);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(3,0.08798351);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(4,0.08531978);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(5,0.0781959);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(6,0.0729943);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(7,0.06552216);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(8,0.06001353);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(9,0.05318369);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(10,0.04987211);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(11,0.04542573);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(12,0.04067607);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(13,0.04090284);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(14,0.03915143);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(15,0.03481127);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(16,0.03480226);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(17,0.02432347);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(18,0.02159679);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(19,0.01712451);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(20,0.01283031);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(21,0.01052247);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(22,0.005917377);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(23,0.007099733);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(24,0.005360069);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(25,0.0041359);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(26,0.002667039);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(27,0.002323422);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(28,0.001440646);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetEntries(16994);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(1,0.3298658);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(2,1.181258);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(3,1.431226);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(4,1.277501);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(5,1.035142);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(6,0.8197962);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(7,0.6487561);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(8,0.4768406);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(9,0.3881799);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(10,0.3163846);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(11,0.2715627);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(12,0.2403781);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(13,0.2138969);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(14,0.1995134);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(15,0.1829179);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(16,0.1701038);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(17,0.08277508);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(18,0.06056845);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(19,0.03923996);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(20,0.02108153);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(21,0.01782088);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(22,0.01047112);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(23,0.008259293);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(24,0.004280774);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(25,0.00303646);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(26,0.002635649);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(27,0.00104834);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(31,0.0003441339);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(1,0.00935963);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(2,0.01770219);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(3,0.0195262);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(4,0.01846859);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(5,0.01659581);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(6,0.01480757);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(7,0.01320986);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(8,0.01128824);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(9,0.01013153);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(10,0.00916491);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(11,0.008464646);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(12,0.00795929);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(13,0.007511246);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(14,0.007184281);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(15,0.006903667);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(16,0.006683412);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(17,0.004629103);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(18,0.004004726);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(19,0.003243659);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(20,0.002382953);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(21,0.002192388);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(22,0.001682614);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(23,0.001414816);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(24,0.001020564);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(25,0.0008723869);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(26,0.0008245629);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(27,0.000549256);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(31,0.0003441339);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetEntries(38313);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_1","ZHcc","F");

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
   H_dR_Bj1_tags_all->Modified();
   H_dR_Bj1_tags_all->cd();
   H_dR_Bj1_tags_all->SetSelected(H_dR_Bj1_tags_all);
}
