#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_all()
{
//=========Macro generated from canvas: Z_dR_algo_all/Z_dR_algo_all
//=========  (Thu Mar 23 11:25:13 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_all = new TCanvas("Z_dR_algo_all", "Z_dR_algo_all",0,0,600,600);
   Z_dR_algo_all->SetHighLightColor(2);
   Z_dR_algo_all->Range(-1.310117,-0.09165151,7.029799,0.672111);
   Z_dR_algo_all->SetFillColor(0);
   Z_dR_algo_all->SetFillStyle(4000);
   Z_dR_algo_all->SetBorderMode(0);
   Z_dR_algo_all->SetBorderSize(2);
   Z_dR_algo_all->SetLeftMargin(0.15709);
   Z_dR_algo_all->SetRightMargin(0.1234783);
   Z_dR_algo_all->SetBottomMargin(0.12);
   Z_dR_algo_all->SetFrameFillStyle(1000);
   Z_dR_algo_all->SetFrameBorderMode(0);
   Z_dR_algo_all->SetFrameFillStyle(1000);
   Z_dR_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.5957348);
   
   TH1F *st_stack_116 = new TH1F("st_stack_116","",30,0,6);
   st_stack_116->SetMinimum(0);
   st_stack_116->SetMaximum(0.5957348);
   st_stack_116->SetDirectory(0);
   st_stack_116->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_116->SetLineColor(ci);
   st_stack_116->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_116->GetXaxis()->SetRange(1,30);
   st_stack_116->GetXaxis()->SetLabelFont(42);
   st_stack_116->GetXaxis()->SetTitleOffset(1);
   st_stack_116->GetXaxis()->SetTitleFont(42);
   st_stack_116->GetYaxis()->SetTitle("Event/0.2");
   st_stack_116->GetYaxis()->SetLabelFont(42);
   st_stack_116->GetYaxis()->SetTitleSize(0.037);
   st_stack_116->GetYaxis()->SetTitleFont(42);
   st_stack_116->GetZaxis()->SetLabelFont(42);
   st_stack_116->GetZaxis()->SetTitleOffset(1);
   st_stack_116->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_116);
   
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_1 = new TH1D("VbbHcc_algo_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(3,0.2409732);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(4,0.3456375);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(5,0.3558948);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(6,0.2712692);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(7,0.1605957);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(8,0.0923429);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(9,0.06855637);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(10,0.03528996);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(11,0.02739309);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(12,0.01937264);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(13,0.01653122);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(14,0.01736227);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(15,0.02472333);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(16,0.02272553);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(17,0.02755815);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(18,0.02020127);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(19,0.005531032);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(20,0.004634943);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(22,0.001955233);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(3,0.02481244);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(4,0.02976395);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(5,0.02980818);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(6,0.04651789);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(7,0.02068361);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(8,0.01475454);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(9,0.01313192);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(10,0.009503635);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(11,0.0078183);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(12,0.006985064);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(13,0.006330581);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(14,0.007226103);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(15,0.007241165);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(16,0.007312564);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(17,0.008548705);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(18,0.007431537);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(19,0.003218675);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(20,0.00437669);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(22,0.001955233);
   VbbHcc_algo_Z_dR_all_stack_1->SetEntries(781);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_all_stack_1->SetFillColor(ci);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_2 = new TH1D("VbbHcc_algo_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(3,0.05967001);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(4,0.1094448);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(5,0.138565);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(6,0.1008514);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(7,0.06574918);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(8,0.02615637);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(9,0.01743776);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(10,0.008273216);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(11,0.007632728);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(12,0.008215821);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(13,0.01057543);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(14,0.008960231);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(15,0.006705513);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(16,0.009982703);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(17,0.004339762);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(18,0.006000568);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(19,0.0036636);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(20,0.002599713);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(21,0.0008976508);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(22,0.0001794384);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(23,0.0003290641);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(25,0.0003156401);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(3,0.005046091);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(4,0.006117888);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(5,0.006694134);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(6,0.00572144);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(7,0.004579048);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(8,0.002876456);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(9,0.002357707);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(10,0.001604367);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(11,0.001529185);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(12,0.001575668);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(13,0.00191529);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(14,0.001719236);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(15,0.001485869);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(16,0.001920222);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(17,0.00117658);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(18,0.001387874);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(19,0.001082441);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(20,0.0008860948);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(21,0.0005342307);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(22,0.0001794384);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(23,0.0003290641);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(25,0.0003156401);
   VbbHcc_algo_Z_dR_all_stack_2->SetEntries(2012);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_all_stack_2->SetFillColor(ci);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_1","ZHcc","F");

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
   Z_dR_algo_all->Modified();
   Z_dR_algo_all->cd();
   Z_dR_algo_all->SetSelected(Z_dR_algo_all);
}
