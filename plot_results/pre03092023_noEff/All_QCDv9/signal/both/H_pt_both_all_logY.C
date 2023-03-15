#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_both_all_logY()
{
//=========Macro generated from canvas: H_pt_both_all/H_pt_both_all
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *H_pt_both_all = new TCanvas("H_pt_both_all", "H_pt_both_all",0,0,600,600);
   H_pt_both_all->SetHighLightColor(2);
   H_pt_both_all->Range(37.97653,-3.72847,1705.96,0.1176843);
   H_pt_both_all->SetFillColor(0);
   H_pt_both_all->SetFillStyle(4000);
   H_pt_both_all->SetBorderMode(0);
   H_pt_both_all->SetBorderSize(2);
   H_pt_both_all->SetLogy();
   H_pt_both_all->SetLeftMargin(0.15709);
   H_pt_both_all->SetRightMargin(0.1234783);
   H_pt_both_all->SetBottomMargin(0.12);
   H_pt_both_all->SetFrameFillStyle(1000);
   H_pt_both_all->SetFrameBorderMode(0);
   H_pt_both_all->SetFrameFillStyle(1000);
   H_pt_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_144 = new TH1F("st_stack_144","",40,0,2000);
   st_stack_144->SetMinimum(23.61484);
   st_stack_144->SetMaximum(0.5408401);
   st_stack_144->SetDirectory(0);
   st_stack_144->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_144->SetLineColor(ci);
   st_stack_144->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_144->GetXaxis()->SetRange(7,30);
   st_stack_144->GetXaxis()->SetLabelFont(42);
   st_stack_144->GetXaxis()->SetTitleOffset(1);
   st_stack_144->GetXaxis()->SetTitleFont(42);
   st_stack_144->GetYaxis()->SetTitle("Event/50.0");
   st_stack_144->GetYaxis()->SetLabelFont(42);
   st_stack_144->GetYaxis()->SetTitleSize(0.037);
   st_stack_144->GetYaxis()->SetTitleFont(42);
   st_stack_144->GetZaxis()->SetLabelFont(42);
   st_stack_144->GetZaxis()->SetTitleOffset(1);
   st_stack_144->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_144);
   
   
   TH1D *VbbHcc_both_H_pt_all_stack_1 = new TH1D("VbbHcc_both_H_pt_all_stack_1","",40,0,2000);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(1,1.317241);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(2,2.625966);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(3,3.066924);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(4,2.195506);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(5,1.451704);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(6,0.8782207);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(7,0.5069543);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(8,0.3015207);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(9,0.1577195);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(10,0.08056966);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(11,0.03382694);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(12,0.02640636);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(13,0.01406357);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(14,0.006564407);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(15,0.004466042);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(16,0.01058414);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(17,0.002333458);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(18,0.0007809372);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(19,0.003435147);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(20,0.0008595889);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(23,0.002051654);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(24,0.001400973);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(1,0.04830184);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(2,0.07088157);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(3,0.07406236);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(4,0.06210437);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(5,0.05994233);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(6,0.04208723);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(7,0.02953759);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(8,0.0230348);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(9,0.01690383);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(10,0.01171844);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(11,0.007693196);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(12,0.00693592);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(13,0.005056041);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(14,0.0033696);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(15,0.002741968);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(16,0.005407341);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(17,0.002333458);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(18,0.0007809372);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(19,0.002503198);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(20,0.0008595889);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(23,0.002051654);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(24,0.001400973);
   VbbHcc_both_H_pt_all_stack_1->SetEntries(8153);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_pt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_pt_all_stack_1->SetLineColor(ci);
   VbbHcc_both_H_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_H_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_pt_all_stack_1,"");
   
   TH1D *VbbHcc_both_H_pt_all_stack_2 = new TH1D("VbbHcc_both_H_pt_all_stack_2","",40,0,2000);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(1,0.4316001);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(2,0.9512503);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(3,1.373943);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(4,1.17863);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(5,0.7079159);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(6,0.3897253);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(7,0.1959969);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(8,0.105885);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(9,0.05293228);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(10,0.02508509);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(11,0.01077258);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(12,0.007237137);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(13,0.003095931);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(14,0.001943959);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(16,0.0001209728);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(17,0.0002726827);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(19,0.0004391919);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(20,0.0003062578);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(23,0.0001557958);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(24,0.0001775376);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(1,0.01063384);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(2,0.0148059);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(3,0.01775812);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(4,0.01693052);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(5,0.01291964);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(6,0.009447167);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(7,0.006839117);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(8,0.004931271);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(9,0.003401497);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(10,0.002404241);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(11,0.001532846);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(12,0.001276651);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(13,0.0008502965);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(14,0.0006489089);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(16,0.0001209728);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(17,0.0002726827);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(19,0.0003190548);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(20,0.0003062578);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(23,0.0001557958);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(24,0.0001775376);
   VbbHcc_both_H_pt_all_stack_2->SetEntries(26049);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_pt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_pt_all_stack_2->SetLineColor(ci);
   VbbHcc_both_H_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_H_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_pt_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_pt_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_pt_all_stack_1","ZHcc","F");

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
   H_pt_both_all->Modified();
   H_pt_both_all->cd();
   H_pt_both_all->SetSelected(H_pt_both_all);
}
