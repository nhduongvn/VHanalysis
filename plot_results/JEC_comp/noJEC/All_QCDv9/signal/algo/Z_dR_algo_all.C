#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_all()
{
//=========Macro generated from canvas: Z_dR_algo_all/Z_dR_algo_all
//=========  (Mon Mar 20 11:48:31 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_all = new TCanvas("Z_dR_algo_all", "Z_dR_algo_all",0,0,600,600);
   Z_dR_algo_all->SetHighLightColor(2);
   Z_dR_algo_all->Range(-1.310117,-0.2391652,7.029799,1.753878);
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
   st->SetMaximum(1.554574);
   
   TH1F *st_stack_116 = new TH1F("st_stack_116","",30,0,6);
   st_stack_116->SetMinimum(0);
   st_stack_116->SetMaximum(1.554574);
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
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(3,0.6217596);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(4,0.9021783);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(5,0.9155571);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(6,0.7949497);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(7,0.542429);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(8,0.328213);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(9,0.2080246);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(10,0.09713541);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(11,0.06607334);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(12,0.06522531);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(13,0.05636641);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(14,0.03595929);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(15,0.03728373);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(16,0.02632398);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(17,0.01239769);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(18,0.009963285);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(19,0.004361843);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(20,0.005195231);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(3,0.04011285);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(4,0.04841897);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(5,0.04757092);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(6,0.05936587);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(7,0.03785583);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(8,0.02891258);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(9,0.02230457);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(10,0.0151529);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(11,0.01225832);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(12,0.0123874);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(13,0.01146947);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(14,0.009193579);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(15,0.009469305);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(16,0.007902366);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(17,0.005855077);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(18,0.00465104);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(19,0.003105068);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(20,0.003689157);
   VbbHcc_algo_Z_dR_all_stack_1->SetEntries(2165);

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
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(2,0.0003747978);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(3,0.1247729);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(4,0.2960336);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(5,0.3747391);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(6,0.3359842);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(7,0.2170429);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(8,0.09995332);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(9,0.04865974);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(10,0.02817459);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(11,0.02716537);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(12,0.01793818);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(13,0.01861556);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(14,0.02287864);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(15,0.01546324);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(16,0.016304);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(17,0.007140249);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(18,0.003388255);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(19,0.002563707);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(20,0.001212644);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(22,0.0004199154);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(2,0.0003747978);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(3,0.006827925);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(4,0.01012149);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(5,0.01124275);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(6,0.01076528);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(7,0.008360513);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(8,0.005693928);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(9,0.003909313);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(10,0.002991483);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(11,0.002939557);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(12,0.002377033);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(13,0.002504319);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(14,0.002658753);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(15,0.002260731);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(16,0.002285312);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(17,0.001576047);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(18,0.0009669074);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(19,0.0009790204);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(20,0.0005642257);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(22,0.0004199154);
   VbbHcc_algo_Z_dR_all_stack_2->SetEntries(5547);

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
