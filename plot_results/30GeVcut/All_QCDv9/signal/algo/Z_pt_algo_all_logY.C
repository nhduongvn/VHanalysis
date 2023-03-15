#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_algo_all_logY()
{
//=========Macro generated from canvas: Z_pt_algo_all/Z_pt_algo_all
//=========  (Tue Feb 14 16:07:55 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_algo_all = new TCanvas("Z_pt_algo_all", "Z_pt_algo_all",0,0,600,600);
   Z_pt_algo_all->SetHighLightColor(2);
   Z_pt_algo_all->Range(37.97653,0.4546527,1705.96,2.918195);
   Z_pt_algo_all->SetFillColor(0);
   Z_pt_algo_all->SetFillStyle(4000);
   Z_pt_algo_all->SetBorderMode(0);
   Z_pt_algo_all->SetBorderSize(2);
   Z_pt_algo_all->SetLogy();
   Z_pt_algo_all->SetLeftMargin(0.15709);
   Z_pt_algo_all->SetRightMargin(0.1234783);
   Z_pt_algo_all->SetBottomMargin(0.12);
   Z_pt_algo_all->SetFrameFillStyle(1000);
   Z_pt_algo_all->SetFrameBorderMode(0);
   Z_pt_algo_all->SetFrameFillStyle(1000);
   Z_pt_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(358.3315);
   
   TH1F *st_stack_76 = new TH1F("st_stack_76","",40,0,2000);
   st_stack_76->SetMinimum(5.627011);
   st_stack_76->SetMaximum(469.7214);
   st_stack_76->SetDirectory(0);
   st_stack_76->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_76->SetLineColor(ci);
   st_stack_76->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_76->GetXaxis()->SetRange(7,30);
   st_stack_76->GetXaxis()->SetLabelFont(42);
   st_stack_76->GetXaxis()->SetTitleOffset(1);
   st_stack_76->GetXaxis()->SetTitleFont(42);
   st_stack_76->GetYaxis()->SetTitle("Events/50.0");
   st_stack_76->GetYaxis()->SetLabelFont(42);
   st_stack_76->GetYaxis()->SetTitleSize(0.037);
   st_stack_76->GetYaxis()->SetTitleFont(42);
   st_stack_76->GetZaxis()->SetLabelFont(42);
   st_stack_76->GetZaxis()->SetTitleOffset(1);
   st_stack_76->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_76);
   
   
   TH1D *VbbHcc_algo_Z_pt_all_stack_1 = new TH1D("VbbHcc_algo_Z_pt_all_stack_1","",40,0,2000);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(1,0.7689989);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(2,3.583315);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(3,3.144224);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(4,1.650538);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(5,0.8963577);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(6,0.5144222);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(7,0.256566);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(8,0.1791352);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(9,0.06777246);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(10,0.02201966);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(11,0.02011963);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(12,0.006322688);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(13,0.01058555);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(14,0.001848645);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(17,0.009651359);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(1,0.04347671);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(2,0.09677481);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(3,0.09022873);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(4,0.07493887);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(5,0.04794105);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(6,0.037151);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(7,0.025452);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(8,0.02132334);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(9,0.01336816);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(10,0.007543416);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(11,0.007247465);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(12,0.003699796);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(13,0.005394032);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(14,0.001848645);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(17,0.007143407);
   VbbHcc_algo_Z_pt_all_stack_1->SetEntries(5082);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_pt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_pt_all_stack_2 = new TH1D("VbbHcc_algo_Z_pt_all_stack_2","",40,0,2000);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(1,0.0946651);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(2,0.5938727);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(3,1.168687);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(4,0.6621396);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(5,0.3204722);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(6,0.1425951);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(7,0.05943388);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(8,0.02761926);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(9,0.0089532);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(10,0.003153101);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(11,0.0008550294);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(12,0.0008799494);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(1,0.00548638);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(2,0.01376344);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(3,0.01971626);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(4,0.01491457);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(5,0.01016103);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(6,0.007284707);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(7,0.004380234);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(8,0.003045159);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(9,0.001697587);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(10,0.001035942);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(11,0.0004962328);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(12,0.0005180826);
   VbbHcc_algo_Z_pt_all_stack_2->SetEntries(10346);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_pt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_pt_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_all_stack_1","ZHcc","F");

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
   Z_pt_algo_all->Modified();
   Z_pt_algo_all->cd();
   Z_pt_algo_all->SetSelected(Z_pt_algo_all);
}
