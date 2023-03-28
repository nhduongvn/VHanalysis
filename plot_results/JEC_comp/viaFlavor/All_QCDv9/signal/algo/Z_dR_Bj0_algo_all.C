#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_all()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_all/Z_dR_Bj0_algo_all
//=========  (Mon Mar 27 11:09:51 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_all = new TCanvas("Z_dR_Bj0_algo_all", "Z_dR_Bj0_algo_all",0,0,600,600);
   Z_dR_Bj0_algo_all->SetHighLightColor(2);
   Z_dR_Bj0_algo_all->Range(-1.310117,-0.1670288,7.029799,1.224878);
   Z_dR_Bj0_algo_all->SetFillColor(0);
   Z_dR_Bj0_algo_all->SetFillStyle(4000);
   Z_dR_Bj0_algo_all->SetBorderMode(0);
   Z_dR_Bj0_algo_all->SetBorderSize(2);
   Z_dR_Bj0_algo_all->SetLeftMargin(0.15709);
   Z_dR_Bj0_algo_all->SetRightMargin(0.1234783);
   Z_dR_Bj0_algo_all->SetBottomMargin(0.12);
   Z_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_all->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.085687);
   
   TH1F *st_stack_148 = new TH1F("st_stack_148","",30,0,6);
   st_stack_148->SetMinimum(0);
   st_stack_148->SetMaximum(1.085687);
   st_stack_148->SetDirectory(0);
   st_stack_148->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_148->SetLineColor(ci);
   st_stack_148->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_148->GetXaxis()->SetRange(1,30);
   st_stack_148->GetXaxis()->SetLabelFont(42);
   st_stack_148->GetXaxis()->SetTitleOffset(1);
   st_stack_148->GetXaxis()->SetTitleFont(42);
   st_stack_148->GetYaxis()->SetTitle("Event/0.2");
   st_stack_148->GetYaxis()->SetLabelFont(42);
   st_stack_148->GetYaxis()->SetTitleSize(0.037);
   st_stack_148->GetYaxis()->SetTitleFont(42);
   st_stack_148->GetZaxis()->SetLabelFont(42);
   st_stack_148->GetZaxis()->SetTitleOffset(1);
   st_stack_148->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_148);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(1,0.1607978);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(2,0.6758629);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(3,0.4150451);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(4,0.17242);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(5,0.06149369);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(6,0.03947862);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(7,0.02225134);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(8,0.01591705);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(9,0.01087253);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(10,0.009292277);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(11,0.006131775);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(12,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(14,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(1,0.01872297);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(2,0.03796346);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(3,0.02985753);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(4,0.01961357);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(5,0.01127949);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(6,0.009020266);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(7,0.006800178);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(8,0.006147631);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(9,0.00451076);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(10,0.004224898);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(11,0.00358544);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(12,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(14,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetEntries(776);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetFillColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(1,0.03691287);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(2,0.2252572);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(3,0.1609049);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(4,0.05759401);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(5,0.02486674);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(6,0.01102004);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(7,0.0064093);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(8,0.006385797);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(9,0.004207423);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(10,0.002478367);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(11,0.001694951);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(12,0.001371791);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(13,0.001130079);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(14,0.0007724772);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(15,0.0007148681);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(25,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(29,0.0003572658);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(1,0.003213899);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(2,0.007932084);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(3,0.006752213);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(4,0.004030771);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(5,0.002607453);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(6,0.00177091);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(7,0.001368243);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(8,0.001386498);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(9,0.00110769);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(10,0.0008401846);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(11,0.0006579769);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(12,0.000627238);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(13,0.0005120494);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(14,0.0004624274);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(15,0.0004195169);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(25,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(29,0.0003572658);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetEntries(2016);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetFillColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_algo_all->Modified();
   Z_dR_Bj0_algo_all->cd();
   Z_dR_Bj0_algo_all->SetSelected(Z_dR_Bj0_algo_all);
}
